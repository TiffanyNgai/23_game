# 23_game
SYDE 121 - review activity #5

Assignment instructions:


1) Let’s play the game of “23”, which is a two‐player game. The game begins with a pile of 23 sticks of equal size. Each player is allowed to take 1, 2, or 3 sticks
   at one time on their turn. Players take turns, and the player who has to take the last stick loses the game.
   Write a program that will allow the human player to play against the computer. The human always moves first while the computer plays according to the following
   rules:
    - If more than 4 sticks remain, then the computer takes 4 – X sticks, where X is the number of sticks that the human took on the previous turn.
    - If there are 2, 3, or 4 sticks left, then the computer takes enough sticks to have 1 remaining.
    - If 1 stick remains, then the computer takes it and loses.

After each turn, the program echoes the move made and also outputs the remaining number of sticks. On human player’s turn, the program checks that the inputted value is between 1 and 3, and that there are enough sticks remaining in the pile.

Write a program that uses conditional statements and loops to solve this problem.

Explain program steps within code comments. Also, explain how you would test this program to ensure that it will not fail in a certain game scenario.
