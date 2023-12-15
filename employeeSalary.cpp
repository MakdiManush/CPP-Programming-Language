#include <iostream>
using namespace std;

class Employee{
public:
    int salary;
    int noOfHours;

    void getInfo(int sal, int hours){
        this->salary = sal;
        this->noOfHours = hours;
    }
    
    void addSal(int sal){
        if(sal < 500){
            this->salary += 10;
        }
    }

    void addWork(int sal, int hours){
        //Overtime!!
        if(hours > 6){
            for(int i = 0; i < hours - 6; i++){
                this->salary += 5;
            }
        }
    }

    void printFinalSalary(){
        addSal(this->salary);
        addWork(this->salary, this->noOfHours);
        cout << "Final Salary: " << this->salary << endl;
    }
};

int main(){
    Employee E1;
    E1.getInfo(500, 10);
    E1.printFinalSalary();

    return 0;
}