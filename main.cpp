#include "globals.h"

void printTable() {
  std::system("clear");
  cout << "TIC TAC TOE\n\n";
  for (int i = 0; i < 3; i++) {
    cout << rowOne[i];
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << rowTwo[i];
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << rowThree[i];
  }
  cout << endl;
}

void draw(string pos, string player) {
  if (pos == "a1" && rowOne[0] == "[ ]")
    rowOne[0] = "[" + player + "]";
  if (pos == "a2" && rowOne[1] == "[ ]")
    rowOne[1] = "[" + player + "]";
  if (pos == "a3" && rowOne[2] == "[ ]")
    rowOne[2] = "[" + player + "]";
  if (pos == "b1" && rowTwo[0] == "[ ]")
    rowTwo[0] = "[" + player + "]";
  if (pos == "b2" && rowTwo[1] == "[ ]")
    rowTwo[1] = "[" + player + "]";
  if (pos == "b3" && rowTwo[2] == "[ ]")
    rowTwo[2] = "[" + player + "]";
  if (pos == "c1" && rowThree[0] == "[ ]")
    rowThree[0] = "[" + player + "]";
  if (pos == "c2" && rowThree[1] == "[ ]")
    rowThree[1] = "[" + player + "]";
  if (pos == "c3" && rowThree[2] == "[ ]")
    rowThree[2] = "[" + player + "]";
}

int winCheck() {
  // Horizontal Check
  if (rowOne[0] == rowOne[1] && rowOne[2] == rowOne[1] && rowOne[0] != "[ ]" &&
      rowOne[1] != "[ ]" && rowOne[2] != "[ ]")
    win = true;
  if (rowTwo[0] == rowTwo[1] && rowTwo[2] == rowTwo[1] && rowTwo[0] != "[ ]" &&
      rowTwo[1] != "[ ]" && rowTwo[2] != "[ ]")
    win = true;
  if (rowThree[0] == rowThree[1] && rowThree[2] == rowThree[1] &&
      rowThree[0] != "[ ]" && rowThree[1] != "[ ]" && rowThree[2] != "[ ]")
    win = true;

  // Vertical Check
  if (rowOne[0] == rowTwo[0] && rowTwo[0] == rowThree[0] &&
      rowOne[0] != "[ ]" && rowTwo[0] != "[ ]" && rowThree[0] != "[ ]")
    win = true;
  if (rowOne[1] == rowTwo[1] && rowTwo[1] == rowThree[1] &&
      rowOne[1] != "[ ]" && rowTwo[1] != "[ ]" && rowThree[1] != "[ ]")
    win = true;
  if (rowOne[2] == rowTwo[2] && rowTwo[2] == rowThree[2] &&
      rowOne[2] != "[ ]" && rowTwo[2] != "[ ]" && rowThree[2] != "[ ]")
    win = true;

  // Diagonal Check
  if (rowOne[0] == rowTwo[1] && rowTwo[1] == rowThree[2] &&
      rowOne[0] != "[ ]" && rowTwo[1] != "[ ]" && rowThree[2] != "[ ]")
    win = true;
  if (rowThree[0] == rowTwo[1] && rowTwo[1] == rowOne[2] &&
      rowThree[0] != "[ ]" && rowTwo[1] != "[ ]" && rowOne[2] != "[ ]")
    win = true;

  if (win)
    return true;

  return false;
}

int main() {
  std::cout << "tic tac toe by TV0123" << std::endl;
  std::cout << std::endl;
  std::cout << "[1] Play\n";

  while (!start) {
    int choice = 0;
    std::cin >> choice;

    if (choice == 1)
      break;

    else {
      std::system("clear");
      std::cout << "ERROR, please choice a valid option\n";
      std::cout << "tic tac toe" << std::endl;
      std::cout << std::endl;
      std::cout << "[1] Play\n";
      std::cout << "[2] coming soon :)\n";
    }
  }
  while (true) {
    printTable();
    if (winCheck()) {
      cout << "O wins!";
      break;
    }
    cout << "Player x's turn: ";
    cin >> xPos;
    draw(xPos, "X");
    printTable();
    if (winCheck()) {
      cout << "X wins!";
      break;
    }
    cout << "Player o's turn: ";
    cin >> oPos;
    draw(oPos, "O");
  }
}