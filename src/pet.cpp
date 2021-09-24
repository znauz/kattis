#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

bool sortbysec(const tuple<int, int>& a,
               const tuple<int, int>& b)
{
    return (get<1>(a) > get<1>(b));
}

int main() {
    int pt1, pt2, pt3, pt4;

    vector<tuple<int, int>> scores;
    tuple<int, int> tup1;
    int sum;


    for(int i = 0; i < 5; i++){
        cin >> pt1 >> pt2 >> pt3 >> pt4;
        sum = pt1 + pt2 + pt3 + pt4;
        tup1 = make_tuple(i+1, sum);
        scores.push_back(tup1);
    }

    sort(scores.begin(), scores.end(), sortbysec);

    int winnernmbr = get<0>(scores.at(0));
    int winnerscore = get<1>(scores.at(0));

    cout << to_string(winnernmbr) << " "  << to_string(winnerscore) << endl;

    return 0;
}