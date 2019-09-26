#include <iostream>

using namespace std;

int factorial(int number){
    int factorial = 1;
    while (number > 0)
    {
        factorial *= number;
        number--;
    }
    return factorial;
}

int main(){
    int num; 
    cout << endl << "Enter your number: ";
    cin >> num;
    cout << "Factorial is: " << factorial(num) << endl;
    return 0;
}