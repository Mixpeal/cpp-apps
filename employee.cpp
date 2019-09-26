#include <iostream>
using namespace std;


class box{
    public:
    int length, breadth, height;
};

int main(){
    box box1;
    box1.length = 3;
    box1.breadth = 2;
    box1.height = 4;
    int volume = box1.length * box1.breadth * box1.height;
    cout << volume << endl;
    return 0;
}