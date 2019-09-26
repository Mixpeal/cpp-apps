#include <iostream>

using namespace std;

int main(){

    int n = 6424, digit;

    for(int i=0;i<4;i++){
        digit = n%10;
        n=n/10;
        cout<< digit <<endl;
    }
    
    return 0;
}


