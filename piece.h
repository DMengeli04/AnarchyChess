// written by Davyn Mengeling

#ifndef PIECE_H
#define PIECE_H

#include <vector>

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

#endif
