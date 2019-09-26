#include <iostream>
using namespace std;

class school{
    public:
    string name, rector, country;
    int schools;
    int getCount(){
        cout << "How many schools do you wish to create: ";
        cin >> schools;
        return schools;
    }
    string detail(){
        cout << "Enter school name: ";
        cin >> name;
        cout << "Enter school rector name: ";
        cin >> rector;
        cout << "Enter school location: ";
        cin >> country;
        return "\n"+ name + "\t"+ rector + "\t"+ country;
    }
    void showschool(string allschool){
        cout << "\nName \tRector's Name \tLocation" << endl;
        cout << allschool << endl;
    }

};

int main(){
    school first;
    string allschool;
    int total = first.getCount();
    for (int i = 0; i < total; i++)
    {
       allschool = allschool + first.detail();
    }
    
    first.showschool(allschool);
    return 0;
}