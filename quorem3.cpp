#include <iostream>

using namespace std;

int main(){
    int n = 6424, first, second, third, forth;
    first = n%10;
    second = (n/10)%10;
    third = (n/100)%10;
    forth = (n/1000)%10;
    cout<< forth <<endl;
    cout<< third <<endl;
    cout<< second <<endl;
    cout<< first <<endl;
    return 0;
}


