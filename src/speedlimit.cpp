#include <iostream>

using namespace std;

int main() {
    int n, s , t;
    int prevT;
    int sum;

    cin >> n;
    while(n > 0){
    prevT = 0;
    sum = 0;
        for(int i = 0; i < n; i++){
            cin >> s >> t;
            sum += s * (t-prevT);
            prevT = t;
        }
        cout << endl << to_string(sum) << "  miles" << endl;
        cin >> n;
    }
    return 0;
}