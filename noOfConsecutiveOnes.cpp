#include <bits/stdc++.h>
#include <stack>

using namespace std;
void printMax1(stack<int> binary);
void convertBinary(int n);
string ltrim(const string &);
string rtrim(const string &);


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    convertBinary(n);
    
    
    return 0;
}

void convertBinary(int n){
    stack<int> binary;
    
    int element;
    while(n!=0){
        element = n%2;
        binary.push(element);
        n = n/2;
    }
    printMax1(binary);
}


void printMax1(stack<int> binary){
    int consecutiveOne = 0;
    int maxConsecutiveOne = 0;
    while(binary.size() != 0){
        int check = binary.top();
        if(check == 1){
            consecutiveOne++;
            maxConsecutiveOne = max(maxConsecutiveOne, consecutiveOne);
        }
        else{
            consecutiveOne = 0;
        }
        binary.pop();
    }
    cout<<maxConsecutiveOne;
}



string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
