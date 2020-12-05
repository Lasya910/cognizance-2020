#include <iostream>
using namespace std;
int main(void){
    int fact=1,term,i;
    cout<<"enter the term : ";
    cin>>term;
    for(int i=1;i<=term;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial value is "<<fact;
}
