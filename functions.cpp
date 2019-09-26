#include <iostream>
using namespace std;

void line(){    // to display line
    cout << "------------------------------" << endl;
}

void message(){
    cout << "i am a message" << endl;
}

int main(){
    cout << "Hello! the program starts in main()." << endl;
    
    line();
    message();
    line();

    return 0;
}
