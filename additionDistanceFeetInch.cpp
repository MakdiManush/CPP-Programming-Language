#include <iostream>
#include <cmath>
using namespace std;

class AddDistance{
public:
    int feet;
    int inch;

    AddDistance(int feet, int inch) : feet(feet), inch(inch){}

    void sum(AddDistance D1, AddDistance D2){
        double inches = D1.inch + D2.inch;
        double feets = D1.feet + D2.feet;

        if (inches >= 12) {
            feets += (int)(inches / 12);
            inches = (int)inches % 12;
        }


        cout<<"Sum of distances: "<< feets << " feet " << inches << " inches" << endl;
    }
};

int main(){
    AddDistance D1(4, 10);
    AddDistance D2(5, 15);
    AddDistance D3(0, 0);
    D3.sum(D1, D2);
    return 0;
}