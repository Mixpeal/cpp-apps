#include <iostream>
using namespace std;
class grade {
    public:
    int english, maths, civic, physics, chemistry, students;
    string studentName;
    int getStudent(){
        cout << "Enter the number of students: ";
        cin >> students;
        return students;    
    }
    string grader(int mark){
        string grade;
        if(mark <= 100 && mark >= 70){
            grade = "A";
        }
        else if(mark <= 69 && mark >= 50){
            grade = "B";
        }
        else if(mark <= 49 && mark >= 40){
            grade = "C";
        }
        else if(mark <= 39 && mark >= 0){
            grade = "D";
        }
        else{
            grade = "-";
        }
        return grade;
    }
    string takeScore(){
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter English: ";
        cin >> english;
        cout << "Enter Math: ";
        cin >> maths;
        cout << "Enter Civic: ";
        cin >> civic;
        cout << "Enter Physics: ";
        cin >> physics;
        cout << "Enter Chemistry: ";
        cin >> chemistry;
        
        return  "\n" + studentName + "\t\t" + this->grader(english) + "\t\t" + this->grader(maths) + "\t" + this->grader(civic) + "\t" + this->grader(physics) + "\t\t" + this->grader(chemistry);
    }

    void displayScore(string score){
        cout << "\nStudent Name \tEnglish \tMath \tCivic \tPhysics \t Chemistry";
        cout  << score << endl;
    }
};


int main(){
    grade grading;
    int allstudents = grading.getStudent();
    string output;
    for (int i = 0; i < allstudents; i++)
    {
       output += grading.takeScore();
    }

    grading.displayScore(output);
    return 0;
}