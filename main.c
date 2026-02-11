#include <stdio.h>
void displayBoard(char board[]);
int checkWin(char board[]);

//omo guy, omo again
int main(){
    char board [9]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char turn='X'; 
    int position;
    while(1){
        displayBoard(board);
        printf("\n%c turn, enter number position to play: ", turn);
        scanf("%d", &position);
        if(position > 0|| position < 10){
            board[position-1]=turn;
            printf("X played");
            displayBoard(board);
            if(checkWin(board)==1){
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
    for(i=0; i<9; i+=2){
        if(board[i]==board[i+3]&&board[i+3]==board[i+6]&&(board[i]=='X'||board[i]=='O')){
            printf("%c won",board[i]);
            return 1;
        }
    }
    if(board[0]==board[4]&&board[4]==board[8]&&(board[0]=='X'||board[0]=='O')){
        printf("%c won",board[i]);
            return 1;
    }
    if(board[2]==board[4]&&board[4]==board[6]&&(board[2]=='X'||board[2]=='O')){
        printf("%c won",board[i]);
            return 1;
    }
    return 0;
}