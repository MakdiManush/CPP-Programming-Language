#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
        string name;
        int salary;

        // This is a Constructor
        Employee(string name, int salary, int sp){
            this->name = name;
            this->salary = salary;
            this->secretPassword = sp;
        }

        void printDetails(){
            cout<<"The name of our first employee is: "<<this->name<<endl<< "His salary is: $"<<this->salary<<endl;
        }

        void getSecretPassword(){
            cout<<"The secret password of employee is: "<< this->secretPassword<<endl;
        }

    private:
        int secretPassword;
};

class programmer: public Employee{
    public: 
        int errors;
};


int main(){
    Employee emp("Aryan", 5000, 4342380);
    // emp.name = "Aryan";
    // emp.salary = 5500;
    emp.printDetails();
    emp.getSecretPassword();
    return 0;
}