#include <iostream>
using namespace std;

class Student{
    public: 
        string name;
        int roll_no;

        // Constructor
        Student(string n, int roll, long long phone, string add){
            this->name = n;
            this->roll_no = roll;
            this->phoneNo = phone;
            this->address = add;
        } 
        
        // Method
        void printDetails(){
            cout<<"Name of the student is: "<<this->name<<endl;
            cout<<"Roll Number of the student is: "<<this->roll_no<<endl;
            cout<<"Phone Number of the student is: "<<this->phoneNo<<endl;
            cout<<"Address of the student is: "<<this->address<<endl;
            cout<<endl;
        }

    private:
        long long phoneNo;
        string address;
};

int main(){
    // Object (We created an object s1)
    Student s1("Aryan Goel", 4342380, 6479959430, "41 Jade Crescent");
    Student s2("John Adams", 4680947, 4179954860, "17 Amethyst Circle");


    // Calling a method
    s1.printDetails();
    s2.printDetails();

    return 0;
}