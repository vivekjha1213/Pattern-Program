#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number for patter:"<<endl;
cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<"*";
        }
        cout<<"\n";
        
    }
    



    return (0);
}