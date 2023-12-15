#include<iostream>

using namespace std;

class Complex{
public:
    int real;
    int imag;

    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    void printComplexNo(){
        this->real = real;
        this->imag = imag;
        cout << real << " + " << imag << "i"  << endl;
    }

    void sum(Complex c){
        int real = this->real + c.real;
        int imag = this->imag + c.imag;
        cout << "Sum is: " << real << " + " << imag << "i"  << endl;
    }

    void diff(Complex c){
        int real = this->real - c.real;
        int imag = this->imag - c.imag;
        cout << "Difference is: " << real << " + " << imag << "i"  << endl;
    }

    void prod(Complex c){
        int real = this->real * c.real - this->imag * c.imag;
        int imag = this->real * c.imag + this->imag * c.real;
        cout << "Product is: " << real << " + " << imag << "i"  << endl;        
    }

    
};

int main(){
    Complex c1(34, 56);
    Complex c2(4, 9);
    c1.printComplexNo();
    c2.printComplexNo();

    c1.sum(c2);
    c1.diff(c2);
    c1.prod(c2);
    return 0;
}