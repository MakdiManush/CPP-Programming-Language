#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v = {1, 2, 3};

    // Iterating Using auto keyword
    for(auto element:v){
        cout<<element<<endl;
    }

    return 0;
}

