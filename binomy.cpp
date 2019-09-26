#include <iostream>
using namespace std;

int main(){
    string star = "**********";
    for (int i = 0; i < 10; i++)
    {
        star = star + "\b";
        cout << star << endl;
    }
      

    return 0;
}