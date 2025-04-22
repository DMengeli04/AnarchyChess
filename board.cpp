// written by Davyn Mengeling

#include <iostream>
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
    Piece operator=(const Piece& p) {
        if (this != &p) {
            letter = p.letter;
            moves = p.moves;
            move_count = p.move_count;
        }
        return *this;
    }
};

std::vector<Piece> generate_board() {
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
    white_pawn.moves = { -8, -16, -9, -7 };
    white_pawn.move_count = 0;

    black_pawn.letter = 'p';
    // forward move, double move on first, diagonal captures
    // reversed because of board position
    black_pawn.moves = { 8, 16, 9, 7 };
    black_pawn.move_count = 0;

    // letter has been turned into 'h' for "horse" so as not to interfere with
    // kings
    knight.letter = 'h';
    // L-shaped jumps
    knight.moves = { -17, -15, -10, -6, 6, 10, 15, 17 };
    knight.move_count = 0;

    bishop.letter = 'b';
    // diagonal moves
    bishop.moves = { -7, -14, -21, -28, -35, -42, -49, -9, -18, -27, -36, -45, -54, -63, 7, 14,
      21, 28, 35, 42, 49, 9, 18, 27, 36, 45, 54, 63 };
    bishop.move_count = 0;

    rook.letter = 'r';
    // vertical and horizontal moves
    rook.moves = { -8, -16, -24, -32, -40, -48, -56, 8, 16, 24, 32, 40, 48,
      56, -1, -2, -3, -4, -5, -6, -7, 1, 2, 3, 4, 5, 6, 7 };
    rook.move_count = 0;

    queen.letter = 'q';
    // combination of lines and diagonals
    queen.moves = { -7, -14, -21, -28, -35, -42, -49, -9, -18, -27, -36, -45, -54, -63, 7, 14,
      21, 28, 35, 42, 49, 9, 18, 27, 36, 45, 54, 63,-8, -16, -24, -32, -40, -48, -56, 8, 16,
      24, 32, 40, 48, 56, -1, -2, -3, -4, -5, -6, -7, 1, 2, 3, 4, 5, 6, 7 };
    queen.move_count = 0;

    king.letter = 'k';
    // same as queen's but only one at a time
    king.moves = { 1, -1, 8, -8, 7, -7, 9, -9 };
    king.move_count = 0;

    // if space is empty
    empty.letter = '_';
    empty.moves = { 0 };

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

    return board;
}
