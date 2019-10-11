#include<iostream>

using namespace std;

int main()
            {
                int m, n, i, j, first[10][10], second[10][10], sum[10][10];

   cout << "Enter the number of rows and columns of matrix ";
   cin >> m >> n;
   cout << "Enter the elements of first matrix\n";

   for (  i= 0 ; i < m ; i++ )
      for ( j = 0 ; j < n ; j++ )
         cin >> first[i][j];

   cout << "Enter the elements of second matrix\n";

   for ( i = 0 ; i < m ;i++ )
      for ( j = 0 ; j < n ; j++ )
            cin >> second[i][j];

   for ( i = 0 ;i< m ; i++ )
      for ( j = 0 ; j < n ; j++ )
         sum[i][j] = first[i][j] + second[i][j];

   cout << "Sum of entered matrices:-\n";

   for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ;j++ )
         cout << sum[i][j] << "\t";

      cout << endl;

   }
}

