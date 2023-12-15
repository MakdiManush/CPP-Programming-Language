#include <iostream>

using namespace std;


class Average{

    public: 
        static void calculate(int num1, int num2, int num3){
            cout<<(num1+num2+num3)/3<<endl;
        }
};

int main(){
    int num1, num2, num3;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>num1>>num2>>num3;

    cout<<"Average: "<<endl;
    Average::calculate(num1, num2, num3);
    return 0;
}
