#include <iostream>

using namespace std;

int main(){
    // finding prime numbers from 1 to specified numbers
    int num;
    cout << endl << "Prime number from 1 to: ";
    cin >> num;
    for(int k = 2; k <= num; k++) {
        if((k%2 != 0 && k%3 != 0 && k%5 != 0 && k%7 != 0) || k == 2 || k == 3|| k == 5|| k == 7 ){
            cout << endl << k << endl;
        }
    }

    return 0;
}