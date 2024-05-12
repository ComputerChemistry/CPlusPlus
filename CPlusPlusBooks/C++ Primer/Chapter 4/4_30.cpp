#include <iostream>
#include <array>
using namespace std; 

int main()
{
  
  int x = 5; 
  int y = 10;
  int mem[10]; 
  int p;
  int f;
  cout << sizeof (x) + (y) << endl; 
 
  cout << sizeof (x < y)  << endl;
  
  cout << sizeof (p->*mem[10]) << endl; 
  
  cout << sizeof (f) << endl; 

  return 0;
 
}
