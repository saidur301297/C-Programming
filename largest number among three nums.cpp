#include<iostream>
using namespace std;
int main()
        {
            int a,b,c;
            cout<<"Enter three  integer numbers: ";
            cin>>a>>b>>c;
            if(a>b&&a>c){
                cout<<"The greatest number is :"<<a;
            }
            else if(b>c&&b>a){
                cout<<"The greatest number is :"<<b;
            }
            else{
                cout<<"The greatest number is :"<<c;
            }

        }
