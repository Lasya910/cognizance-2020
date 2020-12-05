#include<iostream>
using namespace std;
int main (void){

 int i,n1,n2,n3,num;
        cout<<"enter the number";
        cin>>num;
        cout<<"fibonnaci series is";
        for(i=0;i<=num;i++)
        {
            n3=n1+n2; 
        cout<<"\n"<<n3;
        n1=n2;
        n2=n3;
        }
        

           
}
