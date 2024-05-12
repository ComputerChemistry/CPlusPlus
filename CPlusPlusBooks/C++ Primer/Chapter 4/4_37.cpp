#include <iostream>
#include <string> 
using namespace std; 

int main()
{
  
  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;


 int it = static_cast<int> (i);

 double doub = static_cast<double> (d);

 const string *sp = const_cast<string*> (ps);
 
 char *cp = static_cast<char*> (pc);
 
 void *vp = static_cast<double*> (pv);


return 0;
}

