/* Program extracts from Chapter 1 of
   "Data Structures and Program Design in C++"
   by Robert L. Kruse and Alexander J. Ryba
   Copyright (C) 1999 by Prentice-Hall, Inc. */


// Section 1.2:

#include "utility.h"
#include "life.h"

int main()  //  Program to play Conway's game of Life.
/*
Pre:  The user supplies an initial configuration of living cells.
Post: The program prints a sequence of pictures showing the changes in
      the configuration of living cells according to the rules for
      the game of Life.
Uses: The class Life and its methods initialize(), print(), and update().
      The functions  instructions(),  user_says_yes().
*/

{
   Life configuration;
   instructions();
   configuration.initialize();
   configuration.print();
   cout << "Continue viewing new generations? " << endl;
   while (user_says_yes()) {
      configuration.update();
      configuration.print();
      cout << "Continue viewing new generations? " << endl;
   }
}
