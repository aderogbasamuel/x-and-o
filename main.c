#include <stdio.h>
void displayBoard(char board[]);
int checkWin(char board[]);
int checkDraw(char board[]);
int main(){
    char board [9]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char turn='X'; 
    int position;
    displayBoard(board);
    while(1){
        
        printf("\n%c turn, enter number position to play: ", turn);
        scanf("%d", &position);
        if(position > 0 && position < 10) {
                if (board[position-1] != 'X' && board[position-1] != 'O') {
                board[position-1] = turn;
            }       
            else {
                printf("Position already taken!\n");
                continue;
            }
            printf("%c played", turn);
            displayBoard(board);
            if(checkWin(board)==1){
                break;  
            }

if (checkDraw(board) == 1) {
    printf("It's a draw!\n");
    break;
}
            turn=(turn=='X')? 'O': 'X';
        }
        else{
            printf("Invalid input, try another one\n");
        }
    }
    printf("\n");
    return 0;
}

void displayBoard(char board[]){
    printf("\n");

    for (int i = 0; i < 9; i++) {
        printf(" %c ", board[i]);

        if ((i + 1) % 3 != 0) {
            printf("|");
        } else if (i != 8) {
            printf("\n---+---+---\n");
        }
    }
    printf("\n");
}

int checkWin(char board[]){
    int i;

    for(i=0; i<9; i+=3){
        if(board[i]==board[i+1]&&board[i+1]==board[i+2]&&(board[i]=='X'||board[i]=='O')){
            printf("%c won",board[i]);
            return 1;
        }
    }
    for(i=0; i<9; i++){
        if(board[i]==board[i+3]&&board[i+3]==board[i+6]&&(board[i]=='X'||board[i]=='O')){
            printf("%c won",board[i]);
            return 1;
        }
    }
    if(board[0]==board[4]&&board[4]==board[8]&&(board[0]=='X'||board[0]=='O')){
        printf("%c won",board[0]);
            return 1;
    }
    if(board[2]==board[4]&&board[4]==board[6]&&(board[2]=='X'||board[2]=='O')){
        printf("%c won",board[2]);
            return 1;
    }
    return 0;
}
int checkDraw(char board[]) {
    int i;

    for (i = 0; i < 9; i++) {
        // If any position is NOT X or O, game is not a draw
        if (board[i] != 'X' && board[i] != 'O') {
            return 0;   // not a draw
        }
    }

    // All positions are filled with X or O
    return 1;           // draw
}