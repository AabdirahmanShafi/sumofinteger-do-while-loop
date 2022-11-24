#include <iostream>
using namespace std;

int main(){
    int num, sum ;
    
    do{
        cout<<"Please enter a number ";
        cin>>num;
        sum+=num;
    
    }
    while (num !=0);
    cout<<"sum of number is : "<<sum;
}