#include <iostream>

using namespace std;

int main() {

    int allowance;
    int n;
    int p;
    int left = 0;
    cin >> allowance >> n;


    for (int i = 0; i < n; i++){
        cin >> p;
        left += allowance - p;
    }

    int nOne = left + allowance;

    cout << nOne << endl;

    return 0;
}