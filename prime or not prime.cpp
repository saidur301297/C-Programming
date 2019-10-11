#include<iostream>

using namespace std;

int main()
        {
           int a,i,c=0;
           cout<<"Enter a value to check prime or not:";
           cin>>a;
           for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                    {
                    cout<<"\nThe number is not prime.";
                    c=1;
                    break;
                    }

            }
            if(c==0)
                cout<<"The number is  prime";
            else
                cout<<"The number is not Prime.";



        }
