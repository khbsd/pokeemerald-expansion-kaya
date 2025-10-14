import sys
import os

try:
    if not os.path.exists("./tools/wild_encounters/"):
        print("Please run this script from the project's root folder.")
        quit()
    sys.path.append("./tools/wild_encounters/")
    from wild_encounters_to_header import Config
except ImportError:
    print("Could not import the file tools/wild_encounters/wild_encounters_to_header.py")
    quit()

ARGS = [
    "--copy",
]
