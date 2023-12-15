#include <iostream>
#include <cmath>
using namespace std;

class Rectangle{
    public:
        int length, breadth;

        // Rectangle(int s1, int s2){
        //     this->s1 = s1;
        //     this->s2 = s2;
        // }

        void setDim(){
            int len, bre;
            cout<< "Enter the values for length and breadth: ";
            cin>>len>>bre;
            this->length = len;
            this->breadth = bre;
        }

        void getArea(){
            cout<<"Area of Rectangle: "<< this->length * this->breadth << endl;
        }
};

int main(){
    Rectangle R1;
    R1.setDim();
    R1.getArea();
    return 0;
}