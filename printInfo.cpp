#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    int yearOfJoining;
    int salary;
    string address;

    Employee(string name, int yearOfJoining, int salary, string address){
        this->name = name;
        this->yearOfJoining = yearOfJoining;
        this->salary = salary;
        this->address = address;
    }

    void printDeets(Employee e2, Employee e3){
        cout << "Name   Year of Joining    Address"<<endl;
        cout << this->name << "      " << this->yearOfJoining << "           " << this->address <<endl;
        cout << e2.name << "     " << e2.yearOfJoining << "           " << e2.address <<endl;
        cout << e3.name <<"    " << e3.yearOfJoining << "           " << e3.address <<endl;
    }
};

int main(){
    Employee E1("Aryan", 2023, 500000, "17 Amethyst Circle");
    Employee E2("Kartik", 2022, 3500, "41 Jade Circle");
    Employee E3("Bhagwat", 2021, 5600, "456/34 Geeta Nagri");
    E1.printDeets(E2, E3);
    return 0;
}