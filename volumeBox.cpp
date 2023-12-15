#include <iostream>

using namespace std;

class Volume{
public:
    int length;
    int breadth;
    int height;

    Volume(int l, int b, int h) : length(l), breadth(b), height(h){}

};

int main(){
    Volume v1(4, 6, 8);
    cout << v1.length << " " << v1.breadth << " " << v1.height << endl;
    return 0;
}