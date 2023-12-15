#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    public:
        int s1, s2, s3;

        Triangle(int s1, int s2, int s3){
            this->s1 = s1;
            this->s2 = s2;
            this->s3 = s3;
        }

        void perimeter(){
            cout<<"Perimeter of triangle: "<< this->s1+this->s2+this->s3 <<endl;
        }

        void area(){
            double s = (this->s1+this->s2+this->s3) / 2;
            double area = sqrt(s * (s - this->s1) * (s - this->s2) * (s - this->s3));
            cout<<"Area of triangle: "<< area << endl;
        }
};

int main(){
    Triangle t(3, 4, 5);
    t.perimeter();
    t.area();
    return 0;
}