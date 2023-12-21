// 1. Rearrange so element appears exactly once in consecutive list.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<< " ";
    }
    cout<<endl;
}

bool isConsc(vector<int> arr){
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] != arr[i+1] -1){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 5, 0, 3, 6, 7};
    display(arr);

    sort(arr.begin(), arr.end());
    display(arr);

    if(isConsc(arr)){
        cout<< "The elements are consecutive"<<endl;
    }
    else{
        cout<<"The elements are not consecutive"<<endl;
    }
    return 0;
}