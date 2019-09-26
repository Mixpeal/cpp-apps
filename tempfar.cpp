#include <iostream>

using namespace std;

int far(int temp){
 return (temp-32)*(5.0/9.0);
}


int main(){
    int temp;
    cout<< "Enter the temperature in farenheit: " <<endl;
    cin >> temp;
    int celc = far(temp);
    cout << endl << "Your celcius conversion is: " <<  celc << "° Celcius"  << endl;
    return 0;
}

