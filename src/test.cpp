#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <tuple>


void print(std::string text){
    std::cout << text << std::endl;
}

void print(int text){
    std::cout << text << std::endl;
}


int compareVec(std::vector<int> vec1, std::vector<int> vec2){
    int similar = 0;
    for(int i= 0; i < vec1.size();i++){
        for(int j=0; j < vec2.size();j++){
            if(vec1[i] == vec2[j]){
                similar++;
            }
        }
    }
    return similar;
}

std::tuple<int,int> extractNumbers(std::string string){
char delim = ' ';
std::string jack1 = "";
std::string jill1 = "";
int jack;
int jill;
bool swap = false;
    for(int i = 0; i  < string.length(); i++){
        if(string[i] == delim){
            swap = true;
            continue;
        }
        if(swap){
            jill1 += string[i];
        }
        else {
            jack1 += string[i];
        }

    }
std::tuple<int,int> cds = std::make_tuple(stoi(jack1), stoi(jill1));
return cds;
}



void print_vector(std::vector<int> vect){
    for (int i: vect){
        std::cout << i << std::endl;
    }  
}

int main() {
    int number;
    std::string line;
    int iter = 0;
    int jackCDs;
    int jillCDs;
    std::vector<int> jackCD;
    std::vector<int> jillCD;
    while(std::getline(std::cin, line)){
        if(line.compare("0 0") == 0){
            break;
        }
        if(iter == 0){
            //Nmbr of Cds
            std::tuple<int,int> cds = extractNumbers(line);
            jackCDs = std::get<0>(cds);
            jillCDs = std::get<1>(cds);
            iter++;
            continue;
        }
        //jack catalogue starts at iter 1

        //jill catalogue starts at jackCDS+1
        if(iter >= jackCDs+1){
            //Time for jill CDS
            jillCD.push_back(stoi(line));
        }
        else{
            //Jack cds:
            jackCD.push_back(stoi(line));
        }

        //print(line);
        iter++;
    }
    /*
    print("Jack: " + std::to_string(jackCDs));
    print("Jill " + std::to_string(jillCDs));
    print("Jack CDS:");
    print_vector(jackCD);
    print("Jill CDS:");
    print_vector(jillCD); */
    int similar = compareVec(jackCD, jillCD);
    print(similar);
    return 0;
}