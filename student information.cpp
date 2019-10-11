#include<iostream>

using namespace std;

class student
{
public:
    char name[10],clas[10];
    int rol,age;

    void enter()
    {
        cout<<"Enter Student Name:";
        cin>>name;
        cout<<"Enter Student Age:";
        cin>>age;
        cout<<"Enter Student Roll Number:";
        cin>>rol;
        cout<<"Enter Student Class:";
        cin>>clas;

    }
    void display()
    {
        cout<<"\nAge\t\tName\t\tRoll Number\t\tClass";
        cout<<"\n"<<age<<"\t\t"<<name<<"\t\t"<<rol<<"\t\t\t"<<clas;
    }
};

int main()
{
    class student s;
    s.enter();
    s.display();
    cin.get();
}
