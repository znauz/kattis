#include <iostream>

using namespace std;

int main() {

    int h, m; // 0 <= h <= 23 ,, 0 <= m <= 59
    int snoozetime = 45;
    int wholehour = 60;
    cin >> h >> m;


    if(m < snoozetime){
        int rest = snoozetime - m;
        if(h == 0) {
            h = 24;
        }
        h -= 1;
        m = wholehour - rest;
        //wholehour -= rest;
    }
    else{
        m -= snoozetime;
    }

    cout << h << " " << m << endl;



    return 0;
}