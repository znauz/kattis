#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    int cd;
    int jackn;
    int jilln;
    cin >> jackn >> jilln;

    while(jackn > 0 || jilln > 0) {
        unordered_set<int> set;
        for (int i = 0; i <jackn; i++){
            cin >> cd;
            set.insert(cd);
        }

        int count = 0;

        for(int i = 0; i < jilln; i++){
            cin >> cd;
            if(set.count(cd)){
                count++;
            }
        }
        cout << count << endl;
        cin >> jackn  >> jilln;

    }
    return 0;
}