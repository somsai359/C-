#include<iostream>
using namespace std;
int main(){
  int a;
  a = 4;
  cout << "Size of the a:" << sizeof(a) << endl;
  float b ;
  b =4.6;
  cout << "Size of the b" << sizeof(b) <<endl;
  char c;
  c = 'g';
  cout <<"Size of the c:" << sizeof(c) <<endl;
  bool d;
  d = 1;
  cout <<"Size of the d" << sizeof(d)<<endl;
  short int si;
  long int li;
  cout <<"Size of the short int" <<sizeof(si)<<endl;
  cout  <<"Size of the long int " << sizeof(li) <<endl;
  
  return 0 ;
}