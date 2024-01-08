#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str = "23,24,25,26,27,28,29,30,31";
    stringstream ss(str);
    char ch;
    int num;
    vector<int> ages;
    while (ss >> num){
        ages.push_back(num);
        ss >> ch;
    }

    for (int i = 0; i < ages.size(); i++){
        cout<<ages[i]<<endl;
    }


    return 0;
}
