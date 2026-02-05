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

<<<<<<< HEAD
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
=======
<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.**

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.14.3 https://github.com/rh-hideout/pokeemerald-expansion/
```

Please consider [crediting all contributors](CREDITS.md) involved in the project!

# Choosing `pokeemerald` or **`pokeemerald-expansion`**

- **`pokeemerald-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- If compatibility with official games is important, use [`pokeemerald`](https://github.com/pret/pokeemerald). Otherwise, we recommend using **`pokeemerald-expansion`**.
- **`pokeemerald-expansion`** incorporates regular updates from `pokeemerald`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches.

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide to forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokeemerald-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokeemerald-expansion`**](INSTALL.md#Building-pokeemerald-expansion)
## 🚚 [Migrating from **`pokeemerald`**](INSTALL.md#Migrating-from-pokeemerald)
## 🚀 [Updating **`pokeemerald-expansion`**](INSTALL.md#Updating-pokeemerald-expansion)

# [Documentation](https://rh-hideout.github.io/pokeemerald-expansion/)

For detailed documentation, visit the [pokeemerald-expansion documentation page](https://rh-hideout.github.io/pokeemerald-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [Community](https://discord.gg/6CzjAG6GZk)

[![](https://dcbadge.limes.pink/api/server/6CzjAG6GZk)](https://discord.gg/6CzjAG6GZk)

Our community uses the [ROM Hacking Hideout (RHH) Discord server](https://discord.gg/6CzjAG6GZk) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
>>>>>>> 354cdab5e0a4137ea295cf0c5c24d688600c2106
