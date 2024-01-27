#include<iostream>

using namespace std;

int main(){

    /*
        123
        123
        123
    

   int n;
   cout<<"Enter number of rows: ";
   cin>>n;
   for (int i = 1; i <=n; i++)
    {
        for(int j=1 ; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
            */

    /*
        1234
        1234
        1234
        1234
    
        int n;
        cout<<"Enter number of rows: ";
        cin>>n;
        for (int i = 1; i <=n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }
         
    */
        /*
            4321
            4321
            4321
            4321
        */
        /*
        int n;
        cout<<"Enter number of rows: ";
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            for(int j=1;j<=n;j++){
                cout<<n-j+1;
            };
            cout<<endl;
        }
        */

        /*
            *
            **
            ***
            ****
            *****
        */
       /*
       int n;
        cout<<"Enter number of rows: ";
        cin>>n;
        for (int i = 1; i <=n; i++)
        {
            for(int j=1;j<=i;j++){
                cout<<"*";
        }
            cout<<endl;
        }
        */
        int n;
        cout<<"Enter number of rows: ";
        cin>>n;

        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j<=i; j++)
            {
                cout<<i-j+1;
            }
            cout<<endl;
        }
        

   }