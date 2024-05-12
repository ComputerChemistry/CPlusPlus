#include <iostream> 
#include <array> 
using namespace std; 

int main()
{

/*
Este Ciclo for lo definido en tamano y el el tamano de elemenos del arreglo 
definido por la expresion constante en un valor entonces ptr apunta al arreglo definimos ix = 0 
y si ix es != al tamano definido por el arreglo y ptr es distinta al arreglo mas su tamano incrementa el valor de ix que era cero  y el valor de ptr para alzanzar el tamano definido por size y el arreglo 
*/

constexpr int size = 5; 

int ia[size] = {1, 2, 3, 4, 5};

for(int *ptr = ia, ix =0;

  ix != size && ptr != size + ia;

 ++ix, ++ptr)
 



return 0; 

}


