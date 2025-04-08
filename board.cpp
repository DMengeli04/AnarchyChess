// written by Davyn Mengeling

#include <iostream>
#include <vector>

using namespace std;

// initiate class to store pieces
class Piece {
public:
  // each piece stores a letter denoting which piece it is (Ex. king->letter =
  // 'k'), and a vector that stores possible moves relative to the piece's
  // index,
  char letter;
  vector<int> moves;
};

vector<Piece *> generate_board() {
  // the board will be an 8 x 8 vector of Piece objects
  vector<Piece *> board;

  // a second board will help keep track of colors of pieces
  vector<char> color_board;

  // create new pieces in memory and update moves
  Piece *king = new Piece();
  Piece *queen = new Piece();
  Piece *knight = new Piece();
  Piece *bishop = new Piece();
  Piece *rook = new Piece();
  Piece *white_pawn = new Piece();
  Piece *black_pawn = new Piece();
  Piece *empty = new Piece();

  white_pawn->letter = 'p';
  // forward move, double move on first, diagonal captures
  white_pawn->moves = {-8, -16, -9, -7};

  black_pawn->letter = 'p';
  // forward move, double move on first, diagonal captures
  // reversed because of board position
  black_pawn->moves = {8, 16, 9, 7};

  // letter has been turned into 'h' for "horse" so as not to interfere with
  // kings
  knight->letter = 'h';
  // L-shaped jumps
  knight->moves = {-17, -15, 15, 17, -10, -6, 6, 10};

  bishop->letter = 'b';
  // diagonal moves
  bishop->moves = {-7, -9, 9, 7};

  rook->letter = 'r';
  // vertical and horizontal moves
  rook->moves = {1, -1, 8, -8};

  queen->letter = 'q';
  // combination of lines and diagonals
  queen->moves = {1, -1, 8, -8, 7, -7, 9, -9};

  king->letter = 'k';
  // same as queen's but only one at a time
  king->moves = {1, -1, 8, -8, 7, -7, 9, -9};

  // if space is empty
  empty->letter = '_';
  empty->moves = {0};

  // create 8 x 8 board

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

  // color board created

  // testing prints

  for (size_t i = 0; i < board.size(); i++) {
    if ((i % 8) == 0) {
      cout << endl;
    }
    cout << board[i]->letter;
  }

  cout << endl;

  for (size_t j = 0; j < color_board.size(); j++) {
    if ((j % 8) == 0) {
      cout << endl;
    }
    cout << color_board[j];
  }

  cout << endl;

  return board;
}

int main() {
  // try printing the board and see if it works
  generate_board();

  return 0;
}
