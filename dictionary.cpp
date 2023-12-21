#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Person{
public: 
    string name, number;
    
    Person(string name, string number){
        this->name = name;
        this->number = number;
    }

    void accessNumber(){
        cout<<"The Contact number of "<<this->name<<" is: "<<this->number<<endl;
    }

};

int main(){
    Person p1("Aryan", "647-995-9430");
    Person p2("Harry", "459-158-1120");

    p1.accessNumber();

    return 0;
}