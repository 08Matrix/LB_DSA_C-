#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int ans = 0;
    cin>> x;
    int INT_MAX = 0;
    int INT_MIN = 0;
    while( x != 0)
    {
        int digit = x % 10;

        if ((ans > INT_MAX/10 ) || (ans < INT_MIN/10 )  )
        {
            return 0;
        }

        ans = (ans * 10 ) + digit ;
        x = x / 10; 
    }
        
        return ans;
    

}