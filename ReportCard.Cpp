#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int m1, m2, m3;
    int Total;
    float per;
    cout << "Enter the student name : ";
    cin.ignore();
    getline(cin,name);
    cout << "Enter the marks subject 1 : ";
    cin >> m1;
    cout << "Enter the marks subject 2 : ";
    cin >> m2;
    cout << "Enter the marks subject 3 : ";
    cin >> m3;
    Total = m1 + m2 + m3;
    per = (Total / 300.0)*100;
    cout << "<-----Student Report Card----->" << endl;
    cout << "Student name : " << name << endl;
    cout << "Total marks : " << Total << endl;
    cout << "Percentage  : " << per << endl;
    if (per >= 85)
    {
        cout << "Grade : A+ " << endl;
    }
    else if (per >= 80)
    {
        cout << "Grade : A- " << endl;
    }
    else if (per >= 75)
    {
        cout << "Grade : B+ " << endl;
    }
    else if (per >= 70)
    {
        cout << "Grade : B- " << endl;
    }
    else if (per >= 65)
    {
        cout << "Grade : C+ " << endl;
    }
    else if (per >= 60)
    {
        cout << "Grade : C- " << endl;
    }
    else if (per >= 55)
    {
        cout << "Grade : D+ " << endl;
    }
    else if (per >= 50)
    {
        cout << "Grade : D- " << endl;
    }
    else
    {
        cout << "Grade : F  " << endl;
    }
    if(per>=50){
        cout<<"Status : Pass"<<endl;
    }
    else{
        cout<<"Status : Fail"<<endl;
    }
    return 0;
}
