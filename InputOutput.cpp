#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Find max number";
    cout<<"Please enter number 1: ";
    cin>>a;
    cout<<endl<<"Please enter number 2: ";
    cin>>b;

    if (a<b) {
        cout<<endl<<"B is max: "<<b;
    } else if (a==b) {
    	cout<<endl<<"A and B both are equal a:  "<<a<<" b: "<<b;
    } else {
    	cout<<endl<<"A is max: "<<a;
    }

    return 0;
}
