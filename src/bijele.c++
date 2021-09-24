#include <iostream>
#include <map>

using namespace std;

int main() {

    int correct[6] = {1, 1, 2, 2, 2, 8};
    //int king, queen, rook, bishop, knight, pawns;
    //int kingN, queenN, rookN, bishopN, knightN, pawnsN;
    //cin >> king >> queen >> rook >> bishop >> knight >> pawns;

    int unit;
    string pieces = "";
    for(int i = 0; i< 6; i++){
        //cout << "iter: " << i << endl;
        int unitN = 0;
        cin >> unit;
        //cout << "unit " << unit << endl;
        if(unit != correct[i]){
            unitN = correct[i] - unit;
        }
        else {
            unitN = 0;
        }
        //cout << " fixed " << to_string(unitN) << endl;
        pieces += to_string(unitN);
        pieces += ' ';
    }

    cout << pieces << endl;

// 1 king, 1 queen , 2 rook, 2 bishop, 2 knight, 8 pawns,
    return 0;
}