#include <iostream>

using namespace std;


int main() {
    string word;
    string hissornot = "no hiss";

    int counter;
    char last;



    cin >> word;
    for(int i= 0 ; i  < word.length(); i++){


        //cout << "last " << to_string(last) << endl;
        if(i == 0){
            last = word[i];
            continue;
        }
        if(word[i] == 's' && last == 's'){ 
            //hiss
            hissornot = "hiss";
        }
        last = word[i];
    }
    cout << hissornot << endl;

    return 0;
}