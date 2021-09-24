#include <iostream>
#include <string>

bool strcmp(std::string str1, std::string str2){
    if(str1.size() != str2.size()){
        return false;
    }
    for(int i =0; i < str1.size();i++){
        if(str1[i] == str2[i]){

        }
        else {
            return false;
        }
    }
    return true;
}


int main() {
    std::string str1 = "hello";
    std::string str2 = "hello";
    bool tru = strcmp(str1,str2);
    if(tru){
        std::cout << "Tru!";
    }
    else {
        std:: cout << "False!";
    }    
    return 0;
}