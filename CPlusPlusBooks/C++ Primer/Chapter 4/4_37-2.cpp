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

 
  void *vp = const_cast<string*> (ps);
  double *vv = static_cast<double*> (&d);
  char *in = reinterpret_cast<char*> (*pc);  
  char *cp = static_cast<char*> (pv);





  return 0;



}
