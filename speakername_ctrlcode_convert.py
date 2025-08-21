import pathlib
import re
import sys


"""
    regex for in-text names
    "[A-Z]+:
"""


SPEAKER_LIST = list()
ARGS = [
    "--enum",
    "--table",
    "--charmap",
]

SPEAKER_LIST_ENUMS = list()
SPEAKER_LIST_TABLE_LINES = list()

IGNORE_FILES = [
    "debug.inc",
    "test",
]

IGNORE_STRINGS = [
    "total time",
    "elapsed time",
    "on it",
    "a button",
    "b button",
    "silver symbols",
    "gold symbols",
    "that direction",
    "leader",
    "leaders",
]

DO_INC_S   = False
DO_ENUM    = False
DO_TABLE   = False
DO_CHARMAP = False

def NewNameString(speaker):
    newName = speaker[1:-1].capitalize()

    if " " in newName:
        name_list = newName.split(" ")
        newName = ""
        wordCounter = 0
        for word in name_list:
            newName += word.capitalize()

            if wordCounter == 0:
                newName += " "

            wordCounter += 1

    if newName == "Mc":
        newName = newName.upper()

    return newName


def ControlCodeSpeaker(speaker):
    return f"\"{{SPEAKER {FormatSpeakerConst(speaker)}}}"


def UpdateSpeakerList(speaker):
    global SPEAKER_LIST
    if speaker not in SPEAKER_LIST:
        SPEAKER_LIST.append(speaker)


def GetEnum():
    global SPEAKER_LIST_ENUMS

    if DO_ENUM:
        print("enum SpeakerNames {")
        print("    SP_NAME_NONE,")

    for speaker in SPEAKER_LIST:
        speaker_enum = f"{FormatSpeakerConst(speaker)}"
        SPEAKER_LIST_ENUMS.append(speaker_enum)

        if DO_ENUM:
            print(f"    {speaker_enum},")

    if DO_ENUM:
        print("    SP_NAME_COUNT,")
        print("};")


def GetCharmap():
    global SPEAKER_LIST_ENUMS

    if DO_CHARMAP:
        print("SP_NAME_NONE = 00")

    speakerCount = 1
    for speaker in SPEAKER_LIST:
        speaker_enum = f"{FormatSpeakerConst(speaker)}"
        SPEAKER_LIST_ENUMS.append(speaker_enum)

        if DO_CHARMAP:
            fhex = FormatHex(speakerCount)
            if len(fhex) > 2:
                fhex = fhex[1:]
            print(f"{speaker_enum} = {fhex}")

        speakerCount += 1

    if DO_CHARMAP:
        print(f"SP_NAME_COUNT = {FormatHex(speakerCount)[1:]}")


def FormatHex(num):
    return str(hex(num)).upper().replace("X", "")


def FormatSpeakerConst(speaker):
    if " " in speaker:
        speaker = speaker.replace(" ", "_")
    if "." in speaker:
        speaker = speaker.replace(".", "")

    return f"SP_NAME_{speaker.upper()}"


def GetTable():
    global SPEAKER_LIST_TABLE_LINES

    GetEnum()
    if DO_TABLE:
        print("static const u8 *const sSpeakerNamesTable[SP_NAME_COUNT] =")
        print("{")
    speakerCount = 0
    for speakerEnum in SPEAKER_LIST_ENUMS:
        speakerTableLine = f"[{speakerEnum}] = COMPOUND_STRING(\"{SPEAKER_LIST[speakerCount]}\"),"
        SPEAKER_LIST_TABLE_LINES.append(speakerTableLine)
        if DO_TABLE:
            print(f"    {speakerTableLine}")
        speakerCount += 1
    if DO_TABLE:
        print("};")


def OpenFiles():
    inc_list = list(pathlib.Path("./").rglob("*.inc"))
    s_list   = list(pathlib.Path("./").rglob("*.s"))
    file_lists = [inc_list, s_list]
    re_name_pat = r"(\"[A-z\.]+\s?[A-z]+?:)"
    NAME_PAT = re.compile(re_name_pat)

    for file_list in file_lists:
        for scriptFile in file_list:
            skipFile = False
            for ignore_file in IGNORE_FILES:
                if ignore_file in str(scriptFile):
                    skipFile = True
            if skipFile:
                continue

            with open(scriptFile, "r") as script_file:
                newLines = list()

                for line in script_file:
                    match = NAME_PAT.search(line)
                    if match:
                        speaker = NewNameString(match.group())
                        if speaker.lower() not in IGNORE_STRINGS:
                            UpdateSpeakerList(speaker)
                            updated_line = NAME_PAT.sub(ControlCodeSpeaker(speaker), line)
                            newLines.append(updated_line)
                    else:
                        newLines.append(line)

            if DO_INC_S:
                with open(scriptFile, "w", encoding="UTF-8") as updated_script_file:
                    for line in newLines:
                        updated_script_file.write(line)
    if DO_ENUM:
        GetEnum()
    elif DO_TABLE:
        GetTable()
    elif DO_CHARMAP:
        GetCharmap()


def GetReplacementNameCode(path):
    return

def SetBehavior():
    global DO_INC_S
    global DO_ENUM
    global DO_TABLE
    global DO_CHARMAP

    for arg in ARGS:
        if len(sys.argv) > 1:
            if arg in sys.argv[1:3]:
                if arg == ARGS[0]:
                    DO_ENUM = True
                elif arg == ARGS[1]:
                    DO_TABLE = True
                elif arg == ARGS[2]:
                    DO_CHARMAP = True
        else:
            DO_INC_S = True
    OpenFiles()

SetBehavior()