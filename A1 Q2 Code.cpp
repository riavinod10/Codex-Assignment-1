//  Print the ranges of char, short int, long int and double (eg. char from -128 to 127) 
#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;
int main()
{
    cout<<"the range of int is="<<INT_MIN<<" to "<<INT_MAX<<endl;
    cout<<"the range of short is="<<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
    cout<<"the range of long is="<<LONG_MIN<<" to "<<LONG_MAX<<endl;
    cout<<"the range of double is="<<DBL_MIN<<" to "<<DBL_MAX<<endl;
    return 0;
}
