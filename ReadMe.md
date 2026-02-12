# CPE 115(Introduction to c programming) Assignment 1

## Group Members
1. YINUSA MUBARAK ADEBOYE - 250408068
2. SAMUEL ADEROGBA - 250408017
3. ADEPOJU ADAM ADEBOLA - 250408171
4. AKINBODE AJIBOLA MICHEAL - 250408084
5. AFOLAYAN EMMANUEL OLUMIDE - 240408001

# Tic-Tac-Toe Game in C(Group 1)

## 📌 Description

This is a simple **console-based Tic-Tac-Toe game** written in C.
It allows two players to play against each other by taking turns to place **X** and **O** on a 3×3 board.
The program checks for **winning conditions** and also detects a **draw** when the board is full.

---

## 🛠 Features

* Two-player mode (X vs O)
* Clear 3×3 board display
* Input validation (prevents overwriting moves)
* Automatic win detection (rows, columns, diagonals)
* Draw detection when no moves remain

---

## 🧠 How the Program Works

1. The board is initialized with numbers **1–9**.
2. Player **X** starts the game.
3. Players choose a position by entering a number between **1 and 9**.
4. After every move:

   * The board is updated and displayed.
   * The program checks for a **win**.
   * If no win is found, it checks for a **draw**.
5. The game ends when a player wins or the game is a draw.

---

## 📂 Functions Used

* `displayBoard(char board[])`
  Displays the current state of the game board.

* `checkWin(char board[])`
  Checks all winning combinations and announces the winner.

* `checkDraw(char board[])`
  Determines if the game has ended in a draw.

---

## ▶️ How to Compile and Run

```bash
gcc tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```

---

## 🎮 Sample Gameplay

```
 X | O | X
---+---+---
 O | X | O
---+---+---
 O | X | X
X won
```

---

## 📌 Requirements

* C compiler (GCC recommended)
* Terminal or command prompt


