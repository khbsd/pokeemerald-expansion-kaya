# Welcome to Estrogen Emerald!

## so wtf is this
this is a romhack based on [rh-hideouts pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion), with a ton of edits to mons, mechanics, and abilities.
a noncomprehensive list is as follows:
- coins, experience gain, money, berry yield, pokeblock quality, catch rate, ivs of wild mons, egg hatching and laying speed, lottery winning chances, gacha machine dupe protection, shiny chance, pokerus chance, and friendship gain all scale with number of badges you have
- for almost every land/cave map there are three variations of encounter tiles with three different sets of encounters you can get on them, combined with different encounters for each time of day (morning, day, evening, and night). look i added the feature to expansion i can brag about it here
- a bunch of roamers from the first three gens, randomly selected
- a couple of hand-retiled maps, credits to the tilemap creators in [`CREDITS.md`](./CREDITS.md)
- house picker
- brendan has transitioned to brenda. give her a hug and $50000
- wally is considering being sally but isnt out to everyone
- a hypertrainer in lavaridge town
- access to permanent versions of the following items from the beginning of the game:
  - repel
  - lure
  - rare candy
  - ability patch that cycles mon abilities
- a randomly generated selection of starters from [65 hand-picked and buffed mons](./src/starter_choose.c#L121)
- freely relearn egg, tm/hm/ tutor, and moves from a mons previous levels at any time (with most of the code from PCG, thank youuuuu)
- gauntlets for each gym leader the first time you fight them. sink or swim babyyyy
- competitive gym rematch teams. once you make it to the 5th rematch, the teams will then be made up of randomly selected mons from the leaders previous rematch teams + some more powerful versions
- each mon that you let faint permanently adds to the level of pokemon that you encounter, both wild and trainer battles
- all trainer mons will be at your current level cap. it starts at 17 and you will be told what your next cap is after each gym or milestone that increases it, and the npc trainer mon level cap is applied before the aforementioned faint counter.
- oh yeah there are level caps (details in [`src/caps.c`](./src/caps.c))
- (hopefully) tougher gym leader and e4 fights
- you can run while surfing
- lots of mons have new stats, typings, and abilities. go look at the commits of this repo and the files for each
gen in [`src/data/pokemon/species_info/`](./src/data/pokemon/species_info/)
- poison now halves the affected mons defense, before stat stages
- automatic field moves after you get the associated badge and hm, no teaching shit to your party needed

## features i grabbed from other people (tysm omg!)
- PCG's pokevial
- chris piche and agsmgmaster64's gacha expansion
- mrrp's key item wheel
- bivurnum's stardew valley fishing minigame
- ipatix's hq audio mixer, implemented by aichiya
- grunt lucas' 4th gen music
- kek, linathanzel :)
- other credits may be in the actual credit sequence (in case i forgot to list you here) <3
- if i have forgotten you, please open a pr or an issue and i will add you!
