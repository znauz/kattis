#include <iostream>

using namespace std;


int maxThree(int num1, int num2, int num3){

    if(num1 >= num2 && num1 >= num3){
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3){
        return num2;
    }
    else {
        return num3;
    }

}


int main() {
    int x, y, z;
    int a, b, c;
    string order;
    string newOrder= "";

    cin >> x >> y >> z;
    cin >> order;
    c = maxThree(x, y, z);
    if(c == y){
        b = max(x,z);
        if(b == x){
            a = z;
        }
        else {
            a = x;
        }
    }
    else if(c == z){
        b = max(x, y);
         if(b == x){
            a = y;
        }
        else {
            a = x;
        }       
    }
    else{
        b = max(z,y);
         if(b == z){
            a = y;
        }
        else {
            a = z;
        }  
    }



    for(int i =0; i < order.size(); i++){
        if(order[i] == 'A'){
            newOrder += to_string(a);
        }
        else if(order[i] == 'B'){
            newOrder += to_string(b);
        }
        else{
            newOrder += to_string(c);
        }
        newOrder += " ";
    }

    cout << newOrder << endl;

    return 0;
}