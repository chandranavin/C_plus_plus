#include<iostream>
using namespace std;

/* operators in c++ */

int main()
{
    int a = 1;
    cout<< a << endl;

    char b = 'a'  ;
    cout << b << endl;

    bool bl = true;
    cout<< bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.2566;
    cout << d << endl;

    int size = sizeof(a);
    cout<< "size of a is : " << size <<endl;

    int a1 = 'a';
    cout<< a1 <<endl;

    char b1 = 98;
    cout<< b1 <<endl;

    int a2 = 2.5/7;
    cout<< a2 <<endl;

    float b2 = 2.5/7;
    cout<< b2 <<endl;

    int a3 = 2, b3= 3;

    bool first = (a3==b3);
    cout<< first <<endl;

    bool second = (a3>b3);
    cout<< second <<endl;

    bool third = (a3<b3);
    cout<< third <<endl;

    bool fourth = (a3>=b3);
    cout<< fourth <<endl;

    bool fifth = (a3<=b3);
    cout<< fifth <<endl;

    bool sixth= (a3!=b3);
    cout<< sixth <<endl;
    
    //Bitwise opreator
    
    cout<< "a&b " << (a&b) <<endl;
    cout<< "a|b " << (a|b) <<endl;
    cout<< "~a " << ~a <<endl;
    cout<< "a^b " << (a^b) <<endl;
    cout<< (5<<2) <<endl;
    cout<< (5>>2) <<endl;
    cout<< ( ++a) <<endl;
    cout<< (a++ ) <<endl;
    cout<< (a--) <<endl;
    cout<< (a-- ) <<endl;
    return 0;


}
