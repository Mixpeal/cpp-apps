#include <iostream>
#include <cmath>
using namespace std;


// float squarooter(float num){
//     return sqrt(num);
// }


int main(){   
    int a, b, c;
    cout << "Enter A:" ;
    cin >> a;
    cout << "Enter B:" ;
    cin >> b;
    if (a < b)
        cout << "A is less than B" << endl;
    else
        cout << "B is less than A" << endl;
    

    c = a - b;
    if(c < 0){
        cout << "C is Negative" << endl;
    }
    else{
        cout << "C is Positive" << endl;
    }
    return 0;
}







// int main(){   
//     string message("I have learnt something new again"), line1, line2;

//     cout << message.length() << endl;
//     getline(cin, line1);
//     getline(cin, line2);

//     cout << line1 + "*" + line2 << endl;
//     return 0;
// }