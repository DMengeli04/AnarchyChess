
//Siddh Patel's implementation for making valid moves on the chess while maintaing game loop.

/*IMPORTANT NOTE FOR COMPILATION: I included Davyn's cpp file here and commented out his main function in order to make my code compile!*/

/*Credits: I got help from copilot for printBoard function and also my brother-in-law (who is a software engineer) helped me fix my isValid and 
moveMaker function as I was getting a logic error such as pieces not being shown which were moved, etc.*/

/*
Important things to note about this code. I am listing the things I did not consider while writing this code as it would get too
complicated and time consuming. It might not be able to do things I haven't listed here but here are gist of it.
It is unable to: 
-Check for the check and checkmate conditions.
-Check for special move conditions like Pawn promotion or Castling.
-Make sure the diagonal and side moving pieces like Bishop,Rook, Queen  don't jump over existing pieces.
-Sliding/Diagnoal pieces like Bishop or Queen pieces can move to more than one square. For example f1 to d3. 
*/

#include <iostream>
#include <string>
#include "board.cpp"
using namespace std;

class chessPlayer {
private:
        vector<Piece*> board;
        vector<char> colors; //This if for tracking the colors of pieces
        bool white;
public:
       	chessPlayer();
        int chessNotationToIndex(string position);
        bool isValid(int from, int to);
        void moveMaker(int from, int to);
        void printBoard();
        void gamePlayLoop();
};

// Constructor
chessPlayer::chessPlayer() {
        board = generate_board();
        white = true;

        // This segment is for initializing color tracking part
        colors.resize(64);
        for (int i = 0; i < 16; i++){
                colors[i] = 'b';   // Black pieces
        }
	for (int i = 16; i < 48; i++){
                 colors[i] = '_';  // Empty squares
        }
	for (int i = 48; i < 64; i++){
                 colors[i] = 'w';  // White pieces
        }
}

// This is a function which converts chess notations like e2, e4 etc. to appropriate array index
int chessPlayer::chessNotationToIndex(string position) {
        if (position.length() != 2){
                 return -1;
        }

	//This segment converts letts and numbers to appropriate array index
        char alphabet = position[0] - 97;   //97 is ASCII for 'a'
        char number =  56 - position[1];        //56 is ASCII for 8

        if(alphabet < 0 || alphabet > 7){
                return -1;
        }
	if(number < 0 || number > 7){
                return -1;
        }

	int chessIndex = number * 8 + alphabet;
        return chessIndex;
}

// This function is to verify if a move is valid.
bool chessPlayer::isValid(int from, int to) {
  // Basic checks
        if (from < 0 || from >= 64){
                return false;
        }
	if(to < 0 || to >= 64){
                 return false;
        }

	if (board[from]->letter == '_'){
                 return false;
        }


	if (board[from]->letter == 'p' && board[from]->move_count != 0 && ((to == -16) || to == 16))) {
		return false;
	}


	//If its white's turn and if the piece is not white, then return false
        if (white && colors[from] != 'w'){
                return false;
        }

	//if its black's turn and the piece being moved is not black, return false
        if(!white && colors[from] != 'b'){
                return false;
        }

	//If the piece being captured is not empty and is of the same color, that is not valid
        if (board[to]->letter != '_' && colors[from] == colors[to]) {
                return false;
        }

	//This calculates the difference between destination and initial position. If the result is not in any of the vector for moves
        //from davyn's code, then it is not a valid move.
        int diff = to - from;
        for (int i = 0; i < board[from]->moves.size(); i++) {
                int temp =  board[from]->moves[i];
                if (temp == diff){
                        return true;
                }
        }
	return false;
}

//This function makes the pieces move.
void chessPlayer::moveMaker(int from, int to) {
        // This places the piece from initial position to destination.
        //An example would be making the pawn move from e2 to e4.
        board[to] = board[from];
	board[to]->move_count++;

        //This segment is to ensure that the original position of the piece which was moved is empty.
        //An example would be when we move e2 to e4, this segment ensures that the  place e2 is empty now.
        board[from] = new Piece();
        board[from]->letter = '_';
        board[from]->moves.clear();

        //This updates the color tracking feature .
        //In simple words, this ensures that the color in the final position of the piece moved is same as the color of the piece in its initial position.
        //And then its sets the color at the original position of the piece to be empty.
        colors[to] = colors[from];
        colors[from] = '_';

        //This part is important for transitioning from white's turn to black's turn and vice versa.
        if(white){
                white = false;
        }
	else{
             	white = true;
        }
}

//This function prints the chess board.
//CITE: I got help from copilot for properly printing the chess board and help me fix my implementation.
void chessPlayer::printBoard() {
        //This is to show the alphabets a to h at the top of the board.
        cout << "\n  a b c d e f g h\n";

        for (int i = 0; i < 8; i++) {
                cout << 8-i << " ";  //This shows the letts 1 to 8 on the left side of the board.
                for (int j = 0; j < 8; j++) {
                        char piece = board[i*8 + j]->letter;

                        //Printing while tracking the colors.
                        if (colors[i*8 + j] == 'b') 
                                cout << (char)toupper(piece) << " ";  //used toUpper here to distinguish between black's piece and white's piece.
                        else if (colors[i*8 + j] == 'w') 
                                cout << piece << " ";
                        else 
                             	cout << ". "; //This prints dot in the empty squares, in order to not make the board look to empty visually.
                }
                cout << endl;
        }
	cout << "\nTurn: " << (white ? "White" : "Black") << endl;
}

// This function is for maintaining game play loop.
void chessPlayer::gamePlayLoop() {
        string from, to;
        while (true) {
                printBoard();
                cout << "\nYour Move (Eg: e2 e4 in lower case) or type 'quit' to exit: ";
                cin >> from >> to;
                if (from == "quit" || to == "quit"){
                        break;
                }
    
                if (isValid(chessNotationToIndex(from), chessNotationToIndex(to))) {
                        moveMaker(chessNotationToIndex(from),chessNotationToIndex(to));
                        cout << "Congrats! Your move was successfully made.\n";
                } else {
                        cout << "Invalid move! Please try again!\n";
                }
        }
}

int main() {
        chessPlayer chess;
        chess.gamePlayLoop();
        return 0;
}







