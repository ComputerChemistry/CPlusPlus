#include <iostream> 
#include <vector> 
using namespace std; 

int main()
{

  int *typeint; 
  unsigned long int *typeunsi;
  std::vector<int> *typevecint;
  long double *typelongdoub; 
  double *typedouble; 


/* cout << sizeof(typeint)/sizeof(typeint) << endl; 
 cout << sizeof(typeunsi)/sizeof(typeunsi) << endl; 
 cout << sizeof(typevecint)/sizeof(typevecint) << endl;
 cout << sizeof(typelongdoub)/sizeof(typelongdoub) << endl;
 cout << sizeof(typedouble)/sizeof(typedouble) << endl;*/


/*cout << sizeof(typeint) << endl; 
  cout << sizeof(typeunsi) << endl; 
  cout << sizeof(typevecint) << endl;
  cout << sizeof(typelongdoub) << endl;
  cout << sizeof(typedouble)<< endl; */



 /* cout << sizeof(*typeint) << endl; 
  cout << sizeof(*typeunsi) << endl; 
  cout << sizeof(*typevecint) << endl;
  cout << sizeof(*typelongdoub) << endl;
  cout << sizeof(*typedouble)<< endl;*/ 



  cout << sizeof(&typeint) << endl; 
  cout << sizeof(&typeunsi) << endl; 
  cout << sizeof(&typevecint) << endl;
  cout << sizeof(&typelongdoub) << endl;
  cout << sizeof(&typedouble)<< endl; 



  return 0; 
}



