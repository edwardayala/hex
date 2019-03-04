#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Computer.h"

using namespace std;

int main()
{
    cout << "\t\t~HEX GAME~\n";
    cout << "Select mode: \n";
    cout << "1) Player vs Player\n2) Player vs Computer\n3) Computer vs Computer\n";
    int in;
    validate:
    cin >> in;
    if (in == 1) {
        cout << "~Player vs Player~\n";
        /* 
        fork(p1)
        fork(p2)
        show board/update
         */
    }
    else if(in == 2) {
        cout << "~Player vs Computer~\n";
        /*
        fork(p1)
        fork(computer)
        show board/update 
         */
    }
    else if(in == 3){
        cout << "~Computer vs Computer~\n";
        /* 
        fork(computer)
        fork(computer)
        show board/update
         */
    }
    else{
        cout << "Please select a mode (1, 2, or 3)\n";
        goto validate;
    }
    
}