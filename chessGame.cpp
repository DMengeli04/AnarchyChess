/*
*Authors: Siddh Patel, Davyn Mengling, Jeffrey Wiggs, Sergio Macias-Ayala
*File Name: chessGame.cpp
*Description:
This is the backend code for chess game. It sets the board, makes moves, checks whether moves are valid, and also incorporates
the following functionalities important for chess game:
    -Check/Checkmate
    -Castling
    -En Passant
    -Pawn Promotion
  */
#include "piece.h"
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

Piece &Piece::operator=(const Piece &p) {
  if (this != &p) {
    letter = p.letter;
    moves = p.moves;
    move_count = p.move_count;
  }
  return *this;
}

std::vector<Piece> generate_board(char mode) {
  // the board will be an 8 x 8 vector of Piece objects
  std::vector<Piece> board;

  // a second board will help keep track of colors of pieces
  std::vector<char> color_board;

  // create new pieces in memory and update moves
  Piece king;
  Piece queen;
  Piece knight;
  Piece bishop;
  Piece rook;
  Piece white_pawn;
  Piece black_pawn;
  Piece empty;

  white_pawn.letter = 'p';
  // forward move, double move on first, diagonal captures
  white_pawn.moves = {-8, -16, -9, -7};
  white_pawn.move_count = 0;

  black_pawn.letter = 'p';
  // forward move, double move on first, diagonal captures
  // reversed because of board position
  black_pawn.moves = {8, 16, 9, 7};
  black_pawn.move_count = 0;

  // letter has been turned into 'h' for "horse" so as not to interfere with
  // kings
  knight.letter = 'h';
  // L-shaped jumps
  knight.moves = {-17, -15, -10, -6, 6, 10, 15, 17};
  knight.move_count = 0;

  bishop.letter = 'b';
  // diagonal moves
  bishop.moves = {-7,  -14, -21, -28, -35, -42, -49, -9, -18, -27,
                  -36, -45, -54, -63, 7,   14,  21,  28, 35,  42,
                  49,  9,   18,  27,  36,  45,  54,  63};
  bishop.move_count = 0;

  rook.letter = 'r';
  // vertical and horizontal moves
  rook.moves = {-8, -16, -24, -32, -40, -48, -56, 8, 16, 24, 32, 40, 48, 56,
                -1, -2,  -3,  -4,  -5,  -6,  -7,  1, 2,  3,  4,  5,  6,  7};
  rook.move_count = 0;

  queen.letter = 'q';
  // combination of lines and diagonals
  queen.moves = {-7,  -14, -21, -28, -35, -42, -49, -9,  -18, -27, -36, -45,
                 -54, -63, 7,   14,  21,  28,  35,  42,  49,  9,   18,  27,
                 36,  45,  54,  63,  -8,  -16, -24, -32, -40, -48, -56, 8,
                 16,  24,  32,  40,  48,  56,  -1,  -2,  -3,  -4,  -5,  -6,
                 -7,  1,   2,   3,   4,   5,   6,   7};
  queen.move_count = 0;

  king.letter = 'k';
  // same as queen's but only one at a time
  king.moves = {1, -1, 8, -8, 7, -7, 9, -9};
  king.move_count = 0;

  // if space is empty
  empty.letter = '_';
  empty.moves = {0};

  // create 8 x 8 board
  if (mode == 'r') {
    // first row
    board.push_back(rook);
    board.push_back(knight);
    board.push_back(bishop);
    board.push_back(queen);
    board.push_back(king);
    board.push_back(bishop);
    board.push_back(knight);
    board.push_back(rook);

    // second row
    for (int i = 0; i < 8; i++) {
      board.push_back(black_pawn);
    }

    // empty pieces
    for (int j = 0; j < 32; j++) {
      board.push_back(empty);
    }

    // second row white
    for (int k = 0; k < 8; k++) {
      board.push_back(white_pawn);
    }

    // first row white
    board.push_back(rook);
    board.push_back(knight);
    board.push_back(bishop);
    board.push_back(queen);
    board.push_back(king);
    board.push_back(bishop);
    board.push_back(knight);
    board.push_back(rook);

    // board is complete
  } else if (mode == 'a') {

    std::vector<Piece> rando_pieces = {black_pawn, knight, bishop, rook, queen};

    // create 8 x 8 board

    // first row

    for (int a = 0; a < 4; a++) {
      static std::random_device rd;
      static std::mt19937 gen(rd());
      std::uniform_int_distribution<> distr(0, rando_pieces.size() - 1);
      board.push_back(rando_pieces[distr(gen)]);
    }

    board.push_back(king);

    // rest of first and second row
    for (int b = 0; b < 11; b++) {
      static std::random_device rd;
      static std::mt19937 gen(rd());
      std::uniform_int_distribution<> distr(0, rando_pieces.size() - 1);
      board.push_back(rando_pieces[distr(gen)]);
    }

    // empty pieces
    for (int j = 0; j < 32; j++) {
      board.push_back(empty);
    }

    rando_pieces = {white_pawn, knight, bishop, rook, queen};

    // second row white
    for (int c = 0; c < 12; c++) {
      static std::random_device rd;
      static std::mt19937 gen(rd());
      std::uniform_int_distribution<> distr(0, rando_pieces.size() - 1);
      board.push_back(rando_pieces[distr(gen)]);
    }

    board.push_back(king);

    for (int a = 0; a < 3; a++) {
      static std::random_device rd;
      static std::mt19937 gen(rd());
      std::uniform_int_distribution<> distr(0, rando_pieces.size() - 1);
      board.push_back(rando_pieces[distr(gen)]);
    }

    // board is complete
  }
  // initialize color_board
  for (int a = 0; a < 16; a++) {
    color_board.push_back('b');
  }

  for (int b = 0; b < 32; b++) {
    color_board.push_back('_');
  }

  for (int c = 0; c < 16; c++) {
    color_board.push_back('w');
  }
  
  return board;
}

class chessPlayer {
public:
  std::vector<Piece> board;
  std::vector<char> colors; // This if for tracking the colors of pieces
  bool white, castle;
  chessPlayer();
  int chessNotationToIndex(std::string position);
  bool isValid(int from, int to);
  void moveMaker(int from, int to);
  bool findPath(int from, int to);
  void printBoard();
  void gamePlayLoop();
  bool King_Under_Check();
  bool king_can_be_in_check(int from, int to);
  void handlePromotion(int position);
  bool canCastle(int king, int rook);
  void performCastling(int king, int rook);
  int enPassant;
};

// Constructor
chessPlayer::chessPlayer() {
  char mode;
  cout << "What game mode would you like? Type R for regular and A for anarchy"
       << endl;

  cin >> mode;

  board = generate_board(mode);
  white = true;
  castle = false;
  // No initial target for en Passant
  enPassant = -1;

  // This segment is for initializing color tracking part
  colors.resize(64);
  for (int i = 0; i < 16; i++) {
    colors[i] = 'b'; // Black pieces
  }
  for (int i = 16; i < 48; i++) {
    colors[i] = '_'; // Empty squares
  }
  for (int i = 48; i < 64; i++) {
    colors[i] = 'w'; // White pieces
  }
}

// This is a function which converts chess notations like e2, e4 etc. to
// appropriate array index
int chessPlayer::chessNotationToIndex(std::string position) {
  if (position.length() != 2) {
    return -1;
  }
  
  // This segment converts letts and numbers to appropriate array index
  char alphabet = position[0] - 97; // 97 is ASCII for 'a'
  char number = 56 - position[1];   // 56 is ASCII for 8

  //if the letters are not a through g, its not valid
  if (alphabet < 0 || alphabet > 7) {
    return -1;
  }
  //if the numbers are not 0 through 7, it is not valid
  if (number < 0 || number > 7) {
    return -1;
  }

  int chessIndex = number * 8 + alphabet;
  return chessIndex;
}

// This function is to verify if a move is valid.
bool chessPlayer::isValid(int from, int to) {
  // Basic checks
  if (from < 0 || from >= 64) {
    return false;
  }
  if (to < 0 || to >= 64) {
    return false;
  }

  if (board[from].letter == '_') {
    return false;
  }

  // pawns can only move double on first move
  if (board[from].letter == 'p' && board[from].move_count > 0 &&
      (to == from - 16 || to == from + 16)) {
    return false;
  }

  // Checks for en Passants
  if (board[from].letter == 'p' &&
      (to == from + 9 || to == from - 9 || to == from + 7 || to == from - 7) &&
      board[to].letter == '_') {
    // Checks if moving to en Passant target square
    if (to == enPassant) {
      // Validates if pawn is on correct row
      bool validRank = false;
      // White pawn on 5 row
      if (colors[from] == 'w' && (from >= 24 && from <= 31)) {
        validRank = true;
      }
      // Black pawn on 4 row
      if (colors[from] == 'b' && (from >= 32 && from <= 39)) {
        validRank = true;
      }
      // If the pawn is not on the proper row, the move is rejected
      if (!validRank) {
        return false;
      }
      // Calculates position of pawn being captured
      int enemyPawnPos;
      if (colors[from] == 'w') {
        // Capture pawn below target
        enemyPawnPos = to + 8;
      } else {
        // Capture pawn above target
        enemyPawnPos = to - 8;
      }

      // Verifies if enemy pawn exists
      if (enemyPawnPos < 0 || enemyPawnPos >= 64) {
        return false;
      }
      // Verifies if the piece being captured is actually a pawn
      if (board[enemyPawnPos].letter != 'p') {
        return false;
      }
      // Prevents the capturing of your own pawn
      if (colors[enemyPawnPos] == colors[from]) {
        return false;
      }

      return true;
    }
    return false;
  }

  // pawns can't capture on a forward move
  if (board[from].letter == 'p' &&
      (to == from + 8 || to == from - 8 || to == from + 16 ||
       to == from - 16) &&
      board[to].letter != '_') {
    return false;
  }

  // see if can castle
  if (board[from].letter == 'k' && board[to].letter == 'r') {
    if (canCastle(from, to)) {
      castle = true;
      return true;
    }
  }

  // If its white's turn and if the piece is not white, then return false
  if (white && colors[from] != 'w') {
    return false;
  }

  // if its black's turn and the piece being moved is not black, return false
  if (!white && colors[from] != 'b') {
    return false;
  }

  // If the piece being captured is not empty and is of the same color, that is
  // not valid
  if (board[to].letter != '_' && colors[from] == colors[to]) {
    return false;
  }

  // Makes sure peices can't jump over each other (unless they are knights)
  if (!(findPath(from, to)) && board[from].letter != 'h') {
    return false;
  }

  if (king_can_be_in_check(from, to)) {
    return false;
  }

  // This calculates the difference between destination and initial position. If
  // the result is not in any of the vector for moves from davyn's code, then it
  // is not a valid move.
  int diff = to - from;
  for (size_t i = 0; i < board[from].moves.size(); i++) {
    int temp = board[from].moves[i];
    if (temp == diff) {
      return true;
    }
  }
  return false;
}

// This functions handles pawn promotions
void chessPlayer::handlePromotion(int position) {
  // Checks if current position has a pawn that reached promotion location
  if (board[position].letter == 'p') {
    // Checks if pawn is white or black
    if ((colors[position] == 'w' && position <= 7) ||
        (colors[position] == 'b' && position >= 56)) {
      char choice;
      std::cout << "Promote pawn to (q=queen, r=rook, b=bishop, h=knight): ";
      cin >> choice;

      // Creates new piece object for promotion
      Piece promoted;
      // Copies the move count from the pawn being promoted to the new promoted
      // piece
      promoted.move_count = board[position].move_count;

      // Changes piece based on user's choice
      switch (tolower(choice)) {
      case 'q': // Queen
        promoted.letter = 'q';
        promoted.moves = {
            -7, -14, -21, -28, -35, -42, -49, -9, -18, -27, -36, -45, -54, -63,
            7,  14,  21,  28,  35,  42,  49,  9,  18,  27,  36,  45,  54,  63,
            -8, -16, -24, -32, -40, -48, -56, 8,  16,  24,  32,  40,  48,  56,
            -1, -2,  -3,  -4,  -5,  -6,  -7,  1,  2,   3,   4,   5,   6,   7};
        break;
      case 'r': // Rook
        promoted.letter = 'r';
        promoted.moves = {-8, -16, -24, -32, -40, -48, -56, 8,  16, 24,
                          32, 40,  48,  56,  -1,  -2,  -3,  -4, -5, -6,
                          -7, 1,   2,   3,   4,   5,   6,   7};
        break;
      case 'b': // Bishop
        promoted.letter = 'b';
        promoted.moves = {-7,  -14, -21, -28, -35, -42, -49, -9, -18, -27,
                          -36, -45, -54, -63, 7,   14,  21,  28, 35,  42,
                          49,  9,   18,  27,  36,  45,  54,  63};
        break;
      case 'h': // Knight/horse
        promoted.letter = 'h';
        promoted.moves = {-17, -15, -10, -6, 6, 10, 15, 17};
        break;
      // If input is invalid, defaults to queen cause who doesn't want a queen
      default:
        std::cout << "Invalid choice! Defaulting to queen.\n";
        promoted.letter = 'q';
        promoted.moves = {
            -7, -14, -21, -28, -35, -42, -49, -9, -18, -27, -36, -45, -54, -63,
            7,  14,  21,  28,  35,  42,  49,  9,  18,  27,  36,  45,  54,  63,
            -8, -16, -24, -32, -40, -48, -56, 8,  16,  24,  32,  40,  48,  56,
            -1, -2,  -3,  -4,  -5,  -6,  -7,  1,  2,   3,   4,   5,   6,   7};
        break;
      }
      // Replaces pawn with new promoted piece
      board[position] = promoted;
    }
  }
}

// This function makes the pieces move.
void chessPlayer::moveMaker(int from, int to) {

  if (castle == true) {
    castle = false;
    performCastling(from, to);
    return;
  }

  // Calculates if capture can happen with enPassant
  if (board[from].letter == 'p' && to == enPassant) {
    // Determines position of captured pawn
    int enemyPawnPos;
    if (colors[from] == 'w') {
      // Capture pawn below target
      enemyPawnPos = to + 8;
    } else {
      // Capture pawn above target
      enemyPawnPos = to - 8;
    }

    // Removes captured pawn
    Piece empty;
    empty.letter = '_';
    empty.moves.clear();
    empty.move_count = 0;
    board[enemyPawnPos] = empty;
    colors[enemyPawnPos] = '_';
  }

  // This places the piece from initial position to destination.
  // An example would be making the pawn move from e2 to e4.
  board[to] = board[from];
  board[to].move_count++;

  // This segment is to ensure that the original position of the piece which was
  // moved is empty. An example would be when we move e2 to e4, this segment
  // ensures that the  place e2 is empty now.
  board[from].letter = '_';
  board[from].move_count = 0;

  // This updates the color tracking feature .
  // In simple words, this ensures that the color in the final position of the
  // piece moved is same as the color of the piece in its initial position. And
  // then its sets the color at the original position of the piece to be empty.
  colors[to] = colors[from];
  colors[from] = '_';

  // Updates en Passant target after pawn moves
  enPassant = -1;
  if (board[to].letter == 'p') {
    // Checks for two-square pawn move
    if (to - from == 16 || from - to == 16) {
      // Sets target to square behind pawn
      enPassant = (from + to) / 2;
    }
  }

  // This part is important for transitioning from white's turn to black's turn
  // and vice versa.
  if (white) {
    white = false;
  } else {
    white = true;
  }

  // Deals with pawn promotion
  handlePromotion(to);
}

// This function prints the chess board.
//This function was made only to test the backend code on terminal.
//CITATION: I used copilot to help me format printing/output better.
void chessPlayer::printBoard() {
  // This is to show the alphabets a to h at the top of the board.
  cout << "\n  a b c d e f g h\n";

  for (int i = 0; i < 8; i++) {
    cout << 8 - i
         << " "; // This shows the letts 1 to 8 on the left side of the board.
    for (int j = 0; j < 8; j++) {
      char piece = board[i * 8 + j].letter;

      // Printing while tracking the colors.
      if (colors[i * 8 + j] == 'b')
        cout << (char)toupper(piece)
             << " "; // used toUpper here to distinguish between black's piece
                     // and white's piece.
      else if (colors[i * 8 + j] == 'w')
        cout << piece << " ";
      else
        cout << ". "; // This prints dot in the empty squares, in order to not
                      // make the board look to empty visually.
    }
    cout << endl;
  }
  cout << "\nTurn: " << (white ? "White" : "Black") << endl;
}

// This function is for maintaining game play loop.
//This function was made only to test the backend code on terminal.
void chessPlayer::gamePlayLoop() {
  string from, to;
  while (true) {
    printBoard();
    if (King_Under_Check()) {
      if (white) {
        cout << "White side is under check." << endl;
      } else {
        cout << "Black side is under check." << endl;
      }
      bool checkValidator = false;
      for (int i = 0; i <= 63; i++) {
        if (board[i].letter != '_') {
          if ((colors[i] == 'w' && white) || (colors[i] == 'b' && !white)) {
            for (int j = 0; j <= 63; j++) {
              if (isValid(i, j)) {
                if (!king_can_be_in_check(i, j)) {
                  checkValidator = true;
                  i = 100; // this helps breaking out of the loop
                  break;
                }
              }
            }
          }
        }
      }
      if (!checkValidator) {
        cout << "Psych! You got CHECKMATED Loser!" << endl;
        if (white) {
          cout << "Black side is the WINNER!" << endl;
        } else {
          cout << "White side is the WINNER!" << endl;
        }
        return;
      }
    }
    cout << "\nYour Move (Eg: e2 e4 in lower case) or type 'quit' to exit: ";
    cin >> from >> to;
    if (from == "quit" || to == "quit") {
      break;
    }

    if (isValid(chessNotationToIndex(from), chessNotationToIndex(to))) {
      moveMaker(chessNotationToIndex(from), chessNotationToIndex(to));
      cout << "Congrats! Your move was successfully made.\n";
    } else {
      cout << "Invalid move! Please try again!\n";
    }
  }
}

// Determines if there is a path between to coordinates
bool chessPlayer::findPath(int from, int to) {
  int diff = to - from;
  // West, NorthWest, North, NorthEast
  if (diff < 0) {
    // NorthEast
    if (diff % 7 == 0 && diff % 8 != 0 && diff % 9 != 0) {
      if (board[from].letter == 'r') { // keeps the rook in line
        from--;
        while (from > to) {
          if (board[from].letter != '_') {
            return false;
          }
          if ((from + 1) % 8 == 0) { // prevent wraparound
            return false;
          }
          from--;
        }
      }
      if (to % 8 == 0) { // prevent wraparound
        return false;
      }
      from -= 7;
      while (from > to) {
        if (board[from].letter != '_') {
          return false;
        }
        if ((from + 1) % 8 == 0) { // prevent wraparound
          return false;
        }
        from -= 7;
      }
    }
    // North
    else if (diff % 8 == 0) {
      from -= 8;
      while (from > to) {
        if (board[from].letter != '_') {
          return false;
        }
        from -= 8;
      }
    }
    // NorthWest
    else if (diff % 9 == 0) {
      if ((to + 1) % 8 == 0) { // prevent wraparound
        return false;
      }
      from -= 9;
      while (from > to) {
        if (board[from].letter != '_') {
          return false;
        }
        if ((from + 1) % 8 == 0) { // prevent wraparound
          return false;
        }
        from -= 9;
      }
    }
    // West
    else if (diff > -8) {
      if ((to + 1) % 8 == 0) { // prevent wraparound
        return false;
      }
      from--;
      while (from > to) {
        if (board[from].letter != '_') {
          return false;
        }
        if ((from + 1) % 8 == 0) { // prevent wraparound
          return false;
        }
        from--;
      }
    }
  }
  // East, SouthEast, South, SouthWest
  else {
    // SouthWest
    if (diff % 7 == 0) {
      if (board[from].letter == 'r') { // keeps the rook in line
        from++;
        while (from < to) {
          if (board[from].letter != '_') {
            return false;
          }
          if (from % 8 == 0) { // prevent wraparound
            return false;
          }
          from++;
        }
      }
      from += 7;
      while (from < to) {
        if (board[from].letter != '_') {
          return false;
        }
        if (from % 8 == 0) { // prevent wraparound
          return false;
        }
        from += 7;
      }
    }
    // South
    else if (diff % 8 == 0) {
      from += 8;
      while (from < to) {
        if (board[from].letter != '_') {
          return false;
        }
        from += 8;
      }
    }
    // SouthEast
    else if (diff % 9 == 0) {
      if (to % 8 == 0) { // prevent wraparound
        return false;
      }
      from += 9;
      while (from < to) {
        if (board[from].letter != '_') {
          return false;
        }
        if (from % 8 == 0) { // prevent wraparound
          return false;
        }
        from += 9;
      }
    }
    // East
    else if (diff < 8) {
      if (to % 8 == 0) { // prevent wraparound
        return false;
      }
      from++;
      while (from < to) {
        if (board[from].letter != '_') {
          return false;
        }
        if (from % 8 == 0) { // prevent wraparound
          return false;
        }
        from++;
      }
    }
  }
  return true;
}

// check if castling can be performed
bool chessPlayer::canCastle(int king, int rook) {
  // lets check if the rook and king are valid

  // check if a king and rook were given
  if (board[king].letter != 'k') {
    return false;
  }
  if (board[rook].letter != 'r') {
    return false;
  }

  // check if the rook and king are the same color
  if (colors[king] != colors[rook]) {
    return false;
  }

  // check if neither the king nor the rook has moved
  if (board[king].move_count != 0 || board[rook].move_count != 0) {
    return false;
  }

  // check if the spaces in between are empty

  if (king > rook) {
    // if king is on the right of rook
    for (int i = king - 1; i != rook + 1; i--) {
      if (board[i].letter != '_') {
        return false;
      }
    }
  } else {
    for (int i = rook - 1; i != king + 1; i--) {
      if (board[i].letter != '_') {
        return false;
      }
    }
  }

  // check if the king is in check
  if (King_Under_Check()) {
    return false;
  }

  // check if castling would put king in check
  if (king_can_be_in_check(king, king + 2)) {
    return false;
  }

  if (king_can_be_in_check(king, king - 2)) {
    return false;
  }

  return true;
}

//This function does the castling, involving king and rook piece.
void chessPlayer::performCastling(int king, int rook) {
  bool right = false, left = false;
  // check which side of the king the rook is on
  if (rook > king) {
    right = true;
  }
  if (rook < king) {
    left = true;
  }

  int newKing, newRook;

  // move the king and rook into castling positions
  if (right == true) {
    moveMaker(king, king + 2);
    moveMaker(rook, rook - 2);
    newKing = king + 2;
    newRook = rook - 2;
  } else {
    moveMaker(king, king - 2);
    moveMaker(rook, rook + 3);
    newKing = king - 2;
    newRook = rook + 3;
  }

  // increment the move_count for the king and rook
  board[newKing].move_count++;
  board[newRook].move_count++;

  // change turns
  if (white) {
    white = false;
  } else {
    white = true;
  }
}

//This function checks whether king is under check.
bool chessPlayer::King_Under_Check() {
  char kingClr, opponentClr;

  if (white) {
    kingClr = 'w';
    opponentClr = 'b';
  } else {
    kingClr = 'b';
    opponentClr = 'w';
  }

  // for loop for going through each square
  for (int i = 0; i <= 63; i++) {
    // this finds the king
    if (board[i].letter == 'k') {
      if (colors[i] == kingClr) {
        // oncecthe king is found, this portion evaluates if king is under check
        for (int k = 0; k <= 63; k++) {
          // this makes sure the king is being given check by enemy pieces
          if (colors[k] == opponentClr && board[k].letter != '_') {
            int diff = i - k;
            // just like in isValid, this checks if the moves valid
            for (size_t j = 0; j < board[k].moves.size(); j++) {
              int temp = board[k].moves[j];
              if (temp == diff) {
                // this portion ensures that for pawns, only diagnoal checking
                // to king is allowed, pawns cannot give king check if they
                // pawns made forward move.
                if (board[k].letter == 'p') {
                  if ((diff == -8 || diff == -16 || diff == 8 || diff == 16)) {
                    continue;
                  }
                }
                // this portion evaluates if the king is under check by finding
                // clear path to king
                if (findPath(k, i)) {
                  return true; // returns true if king is under check
                }
                break;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

//This functions is for checking whether king will be under check when moved.
bool chessPlayer::king_can_be_in_check(int from, int to) {
  // Initially, we saved the board pieces information before making changes
  Piece temp1 = board[from];
  Piece temp2 = board[to];

  char tempClr1 = colors[from];
  char tempClr2 = colors[to];

  // Just like moveMaker function, we make the move, albeit temporarily
  board[to] = board[from];
  board[from].letter = '_';

  colors[to] = colors[from];
  colors[from] = '_';

  // this checks if the king is under check after we made the temporary move
  bool checker;
  checker = King_Under_Check();

  // this reverts the board's information to the initial state
  board[from] = temp1;
  board[to] = temp2;

  colors[from] = tempClr1;
  colors[to] = tempClr2;

  return checker;
}

int main() {
  chessPlayer chess;
  chess.gamePlayLoop();
  return 0;
}
