// -----------------Works But Not Efficient-------------------
// -----------------Time Complexity O(n^2)-------------------

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

class PhoneBook{
public: 
    string key;
    int value;
    
    void setKeyValue(string key, int value){
        this->key = key;
        this->value = value;
    }
    
    int getValue(string key){
        if(this->key == key){
            return this->value;
        }
        return -1;
    }
};

void getValueCheck(string key, int n, PhoneBook p[]){
    int value;
    for(int i = 0; i < n; i++){
        value = p[i].getValue(key);
        if(value != -1) {
            break;
        }
    }
    if(value == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<key<<"="<<value<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    PhoneBook p[n];
    
    for(int i = 0; i < n; i++){
        string key;
        int value;
        cin>>key>>value;
        p[i].setKeyValue(key, value);
    }

    for(int i = 0; i < n; i++){
        string key;
        int value;
        cin>>key;
        getValueCheck(key, n, p);
    }
    
    return 0;
}


// -----------Improve Time Complexity by using Data Structure such as 
// an (unordered_map) or a (hast table)--------------

