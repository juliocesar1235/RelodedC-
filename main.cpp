#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string name="";
    string adress="";
    int iSemester;
    int iAge;
    double dheight;
    string letter="";

    cout << "Hello, what is your name?!" << endl;
    getline(cin,name);
    cout << "And where do you live?" << endl;
    getline(cin,adress);
    cout << "So you are" << name << " and you live here " << adress << endl;
    cout << "Also we need to know your semester pls " << endl;
    cin >> iSemester;
    cout << "Your height pls.." <<endl;
    cin >> dheight;
    cout << "your Semester is: " << iSemester << "and your height" << dheight << endl;
    cout << " Next ,pls write a letter to someone "<<endl;
    getline(cin, letter);
    cout << "now your age to put all the information together" << endl;
    cin >> iAge;
    cout << "Hello my name is: " << name << "Im: " << dheight << "and im in my semester " << iSemester << "I live in " << adress << endl << " and this is my letter:"<< endl << letter << endl;


    return 0;
}
