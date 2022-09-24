#include<iostream>
using namespace std;

int main()
{


/*
    int a = 123;

    cout<< a << endl;

    char b = 'v'; // We cannot give a double character .

    cout<<b << endl;

    bool bl = true;
    cout<< bl << endl;

    float f = 1.2;
    cout<< f << endl;

    double d = 1.23;
    cout<< d << endl;

    int size = sizeof(a);
    cout << "Size of a is  " << size << endl;

*/

// TYPECASTING 

/*
    int a = 'a';
    cout<< a <<endl;

    char ch = 98;
    cout<< ch << endl;
    
    char ch1 = 123456;
    cout<< ch1 << endl;
*/


// Unsigned will only store +ve value .

/*
    unsigned int a = -112;
    cout << a << endl;
*/

// Size of 

    int a = 4;
    double b = 1.90;
    char c = '+';
    int sizeInteger = sizeof (a) , sizeDouble = sizeof(b), sizeChar = sizeof(c);
    cout<< "Size of an integer is " << sizeInteger << " bytes" << endl;
    cout<< "Size of an double is " << sizeDouble <<  "bytes" << endl;
    cout<< "Size of an char is " << sizeChar << " bytes" << endl;

}