#include <iostream>
#include <string>
using namespace std;


int parseMove2(char move, int currpos){
    switch(currpos){
        case 1:
            if(move == 'A'){
                return 2;
            }
            else if(move == 'C'){
                return 3;
            }
            return 1;
        case 2:
            if(move == 'A'){
                return 1;
            }
            else if(move == 'B'){
                return 3;
            }
            return 2;
        case 3:
            if(move == 'B'){
                return 2;
            }
            else if(move == 'C'){
                return 1;
            }
            return 3;
        default:
            return 0;
    }
    return 0;
}


int main() {

    //A = 1 <-> 2
    //B = 2 <-> 3
    //C = 3 <-> 1
    string moves;
    int ballpos = 1;
    cin >> moves;
    for(int i = 0; i < moves.size(); i++){
        ballpos = parseMove2(moves[i], ballpos);

    }

    cout << ballpos << endl;


    return 0;
}