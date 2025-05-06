// written by Davyn Mengeling and edited by Siddh Patel

#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <string>

// initiate class to store pieces
class Piece {
public:
  // each piece stores a letter denoting which piece it is (Ex. king.letter =
  // 'k'), and a vector that stores possible moves relative to the piece's
  // index,
  char letter;
  std::vector<int> moves;
  int move_count;
  Piece &operator=(const Piece &p);
};

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

#endif
