#include<iostream>
using namespace std;

int main() {
    int a = 5;
    char b = 'a';
    float c = 8.6;
    bool d = false;

    cout<<"Value of a is: "<<a<<" And size: "<<sizeof(a)<<endl;
    cout<<"Value of b is: "<<b<<" And size: "<<sizeof(b)<<endl;
    cout<<"Value of c is: "<<c<<" And size: "<<sizeof(c)<<endl;
    cout<<"Value of d is: "<<d<<" And size: "<<sizeof(d)<<endl;

    long int la = 20;
    short int sa = 30;
    
    cout<<"Value of la is: "<<la<<" And size: "<<sizeof(la)<<endl;
    cout<<"Value of sa is: "<<sa<<"And size: "<<sizeof(sa)<<endl;

    return 0; 
}
