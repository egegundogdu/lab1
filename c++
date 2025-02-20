#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;

    cout << "what is your name?";
    cin >> name;
    cout << "hello " << name << "." << endl;


    string studentID;

    cout << "what is your id?";
    cin >> studentID;
    cout << "your id is" << studentID << "." << endl;


    int var1, var2;

    cout << "enter value for var1";
    cin >> var1;
    cout << "enter value for var2";
    cin >> var2;

    int sum = var1+var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "sum: " << sum << " difference: " << diff << " product: " << prod << endl;


    string studentName;
    int labGrade, midtermGrade, finalGrade;

    cout << "enter students name";
    cin >> studentName;

    cout << "enter lab grade";
    cin >> labGrade;

    cout << "enter midterm grade";
    cin>> midtermGrade;

    cout << "enter final grade";
    cin>> finalGrade;

    double lastscore = (labGrade* 0.25) + (midtermGrade *0.35) + (finalGrade* 0.40);

    cout << "name: " << studentName << endl;
    cout << "Lab: " << labGrade << ", Midterm: " << midtermGrade << ", Final: " << finalGrade << endl;
    cout << "Last Score: " << lastscore << endl;

    cout << "*" << endl;
    cout << "**" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl;

    return 0;
}
