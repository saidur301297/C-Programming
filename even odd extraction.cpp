#include<iostream>
using namespace std;

int main()
        {
            int n,i;
            cout<<"Please enter a positive number:";
            cin>>n;
            cout<<"Enter " <<n<<" elements:";

            int array[n];

            for(i=0;i<n;i++)
                cin>>array[i];

            int even[n],odd[n],j=0,k=0;
            for(i=0;i<n;i++)
                if(array[i]%2==0)
                    even[j++]=array[i];
                else
                    odd[k++]=array[i];

            cout<<"Even array elements are: ";
            for(i=0;i<j;i++)
                cout<<even[i]<<" ";

            cout<<"\nOdd array elements are: ";
            for(i=0;i<k;i++)
                cout<<odd[i]<<" ";

        }
