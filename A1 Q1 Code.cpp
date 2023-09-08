//Take input from the user. Ask for their full name, age, college name and display it
#include <iostream>
using namespace std;
int main() 
{
    string name,college;
    int age;
    cout<<"Enter your Name: ";
    getline(cin,name);
    cout<<"Enter your College Name: ";
    getline(cin,college);
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Hello,"<<name<<", I see you are "<<age<<" years old and currently studying at "<<college<<endl;

}