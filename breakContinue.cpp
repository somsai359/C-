#include<iostream>
using namespace std;
int main(){
    int p = 3000;
    for( int i = 1 ; i <= p ; i++){
        if( i%2==0){
            continue;
        }
        if(p == 0){
         break;
        }
        cout <<"Go today"<<endl;
        p = p -300;
    }
    return 0 ;
}