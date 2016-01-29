# chip8
Simple (work in progress) chip8 emulator written in C++11 using SDL implemented per [Cowgod's Chip-8 Technical Reference v1.0](http://devernay.free.fr/hacks/chip8/C8TECH10.HTM#Ex9E) and [CHIP-8 Wikipedia page](https://en.wikipedia.org/wiki/CHIP-8).

## Prerequisites
* C++ compiler (Tested with clang)
* SDL2

## How to use
    $ git clone https://github.com/caryanne/chip8.git
    $ cd chip8
    $ make
    $ ./chip8 <input file>

## What's left?
* Sound
* There may be a few instructions outstanding
* More command line options (toggle verbose output)
* Identify/fix bugs

## Screenshots
![pong](https://raw.githubusercontent.com/caryanne/chip8/master/screens/pong.png)
![trip8 demo](https://raw.githubusercontent.com/caryanne/chip8/master/screens/trip8.png)
![fifteen](https://raw.githubusercontent.com/caryanne/chip8/master/screens/fifteen.png)
