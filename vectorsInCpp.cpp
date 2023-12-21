// #include<iostream>
// #include<vector>

// using namespace std;

// void displayVec(vector<int> vec1){
//     for(int i = 0; i < vec1.size(); i++){
//         cout<<"Element in this vector: "<<vec1[i]<<endl;
//         cout<<vec1.at(i)<< " "<<endl;
//     }
// }

// int main(){
//     vector<int> vec1;
//     int element;
//     for(int i = 0; i < 4; i++){
//         cout<<"Enter an element to add to this vector: ";
//         cin>>element;
//         vec1.push_back(element);
//     }

//     displayVec(vec1);
//     vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter+1, 10, 15);
//     displayVec(vec1);
//     return 0;
// }



// -------- Practice Questions-----------
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// 2. ----------Return elements in a vecotr that are smaller than their adjacent elements----------
vector<int> smallerAdj(vector<int> arr){
    vector<int> smaller;
    for(int i = 1; i < arr.size()-1; i++){
        if(arr[i] < arr[i+1] && arr[i] < arr[i-1]){
            smaller.push_back(arr[i]);
        }
    }
    return smaller;
}

void display(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<< " ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 4, 0, 3, 1, 7};
    display(arr);

    vector<int> smaller = smallerAdj(arr);
    display(smaller);

    return 0;
}