//non-gui chess game loop implementation by sergio macias-ayala
#include <iostream>
#include <vector>
#include <string>
#include "board.cpp"

using namespace std;

//global game state variables
vector<Piece*> board;        
vector<char> color_board;    
char currentPlayer = 'w';    
bool gameOver = false;       

//initialize game board and state
void initializeGame() {
    board = generate_board();
    color_board.clear();
    
    //set up initial piece colors
    for (int a = 0; a < 16; a++) {
      color_board.push_back('b');
    }
    for (int b = 0; b < 32; b++) {
      color_board.push_back('_');
    }
    for (int c = 0; c < 16; c++) {
      color_board.push_back('w');
    }

    gameOver = false;
    currentPlayer = 'w';
}

//display the chess board with coordinates
void displayBoard() {
    cout << "\n  a b c d e f g h" << endl;
    
    //print each row with pieces
    for (int row = 0; row < 8; row++) {
        cout << 8 - row << " ";
        for (int col = 0; col < 8; col++) {
            int index = row * 8 + col;
            cout << board[index]->letter << " ";
        }
        cout << 8 - row << endl;
    }
    cout << "  a b c d e f g h" << endl << endl;
}

//move pieces from one position to another
void makeMove(int from, int to) {
    board[to] = board[from];
    board[from] = new Piece();  
    board[from]->letter = '_';
    board[from]->moves = {0};
    
    color_board[to] = color_board[from];
    color_board[from] = '_';
    
    cout << "move made from " << from << " to " << to << endl;
}

//switch active player
void switchPlayer() {
    if (currentPlayer == 'w') currentPlayer = 'b';
    else currentPlayer = 'w';
}

//handle forfeits
void forfeit() {
    if (currentPlayer == 'w') cout << "white forfeits. black wins!" << endl;
    else cout << "black forfeits. white wins!" << endl;
    gameOver = true;
}

//convert character to lowercase
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

//process player move input
void processMove(string input) {
    if (input == "forfeit") {
        forfeit();
        return;
    }
    
    //validate input format
    if (input.length() < 5 || input[2] != ' ') {
        cout << "invalid move format. use 'e2 e4' format." << endl;
        return;
    }
    
    //convert algebraic notation to board indices
    int fromCol = toLower(input[0]) - 'a';
    int fromRow = 8 - (input[1] - '0');
    int toCol = toLower(input[3]) - 'a';
    int toRow = 8 - (input[4] - '0');
    
    //validate coordinates
    if (fromCol < 0 || fromCol > 7 || fromRow < 0 || fromRow > 7 ||
        toCol < 0 || toCol > 7 || toRow < 0 || toRow > 7) {
        cout << "invalid coordinates. use a-h and 1-8." << endl;
        return;
    }
    
    int fromIndex = fromRow * 8 + fromCol;
    int toIndex = toRow * 8 + toCol;
    
    //check if moving own piece
    if (color_board[fromIndex] != currentPlayer) {
        if (currentPlayer == 'w') cout << "you can only move white pieces." << endl;
        else cout << "you can only move black pieces." << endl;
        return;
    }
    
    makeMove(fromIndex, toIndex);
    switchPlayer();
}

//main game loop
int main() {
    initializeGame();
    
    while (!gameOver) {
        displayBoard();
        
        if (currentPlayer == 'w') cout << "white's turn." << endl;
        else cout << "black's turn." << endl;
        
        cout << "enter move (e.g. 'd2 d4') or 'forfeit' to quit: ";
        
        string input;
        getline(cin, input);
        processMove(input);
    }
    
    //clean up allocated memory
    for (size_t i = 0; i < board.size(); i++) {
        delete board[i];
    }
    
    return 0;
}
