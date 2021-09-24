#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    int sum = 0;
    int p;
    cin >> n;

    for(int i =0; i < n; i++){
        cin >> p;
        string pStr = to_string(p);
        int power = p % 10;
        unsigned sz = pStr.size();
        pStr.resize(sz-1);
        sum += pow(stof(pStr), power);
    }

    cout << sum << endl;



    return 0;
}