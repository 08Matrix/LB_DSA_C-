#include<iostream>
using namespace std;
// Not complete Pattern HOMEWORK
    // 4 5 3 2 1 
    // 4 5 3 2 1 
    // 4 5 3 2 1 
    // 4 5 3 2 1
int main()
{
    int n ;
    cin>> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while ( j <= n)
        {
            cout<< j << " ";
            j = j + 1;
            
        }
        cout<<endl;
        i = i + 1;
    }

}