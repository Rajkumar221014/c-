#include<iostream>
using namespace std;
int main(){
    for ( int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if(i==2){
            continue;
        }
    }
    
    
    return 0;
}