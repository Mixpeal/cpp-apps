#include <iostream>

using namespace std;

int main(){
    int n = 6424, eachdigit;
    int num = 0;
    while(num < 4){
        eachdigit = n % 10;
        cout<< eachdigit <<endl;
        n/=10;
        num++;
    }
    return 0;
}


