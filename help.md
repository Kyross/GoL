# Help
*01/26/2019* - [Wikipedia](https://en.wikipedia.org/wiki/Conway's_Game_of_Life)

## Table of contents

- [Help](#help)
  - [Table of contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Rules](#rules)
  - [Control](#control)
    - [Game Control](#game-control)
    - [Application](#application)
    - [Options](#options)
      - [Parameters](#parameters)
      - [Game mode](#game-mode)
      - [Demo](#demo)


## Introduction
The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970.

The game is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves, or, for advanced players, by creating patterns with particular properties. 

## Rules
The universe of the Game of Life is an infinite, two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, alive or dead, (or populated and unpopulated, respectively). Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:

    Any live cell with fewer than two live neighbors dies, as if by underpopulation.
    Any live cell with two or three live neighbors lives on to the next generation.
    Any live cell with more than three live neighbors dies, as if by overpopulation.
    Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

 *You can change the rules in Option>Parameters>Game Mode*

The initial pattern constitutes the seed of the system. The first generation is created by applying the above rules simultaneously to every cell in the seed; births and deaths occur simultaneously, and the discrete moment at which this happens is sometimes called a tick. Each generation is a pure function of the preceding one. The rules continue to be applied repeatedly to create further generations. 


## Control

### Game Control
>**Left Click :** Fill a cell *(you can hold and move the mouse to fill multiple cell)*

>**Right Click :** Unfill a cell *(you can hold and move the mouse to unfill multiple cell)*

>**File (Ctrl+N) :** Reset the game and all of his parameter

>**Open (Ctrl+O) :** Open a *.life model

>**Save (Ctrl+S) :** Save the current paint and his parameters in a *.life

>**Run (F5) :** Run the generation until no more generation are available

>**Pause (F6) :** Pause the generation

>**Clear (F7) :** Clear all the grid

### Application
>**Quit (Ctrl+Q) :** Close all windows of the application

>**Maximized :** Display the MainWindow in maximized

>**FullScreen :** Display the MainWindow in fullscreen

>**Normal :** Display the MainWindow in the last resized state

### Options

#### Parameters
>**Universe :** The size of the grid *(not editable when the grid is not empty)*

>**Timer :** The interval between generations occurs

>**Color :** The color of the painted cells

#### Game mode
You can edit the rules of the game to change the cell actions depending of their neighbourhood
* Born 
* Stase
#### Demo
You can find different kind of model to try the game
* Random
* Stable
* Oscillator
* Canon