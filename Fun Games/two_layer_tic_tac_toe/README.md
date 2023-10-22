
# Two-Layer Tic-Tac-Toe Rules

Welcome to the Two-Layer Tic-Tac-Toe game! This unique variation adds an extra layer of complexity to the classic tic-tac-toe.

## Game Components

1. The game consists of a normal 3x3 tic-tac-toe grid.
2. Each cell in the 3x3 grid is a 3x3 normal tic-tac-toe grid itself.

## Notation

- The outer 3x3 grid cells are labeled as A1, A2, ..., A9.
- Each inner cell within the 3x3 grids is labeled as A11, A12, ..., A99, corresponding to the outer cell (A1, A2, ..., A9).

## Gameplay Rules

1. Players take turns making moves in smaller cells (A11, A12, ..., A99).
2. When a player makes a move in a smaller cell, say Aij, the next player must make a move in the first layer Aj block (some k such that Ajk).
3. The game continues until a player wins on the inner 3x3 grids or the outer 3x3 grid.

## Visual Representation

The outer 3x3 grid:

```
A1 | A2 | A3
---|----|---
A4 | A5 | A6
---|----|---
A7 | A8 | A9
```

An example of the inner 3x3 grid within A1:

```
A11 | A12 | A13
----|-----|-----
A21 | A22 | A23
----|-----|-----
A31 | A32 | A33
```

## Example Gameplay

1. Player 1 makes a move in A11.
2. The next move must be made in A1 block, for example, A12.
3. Players continue making moves until a player wins on the inner grid or the outer grid.

Enjoy playing this challenging variant of tic-tac-toe with an extra layer of strategy!
