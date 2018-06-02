#include <iostream>
#include <stdlib.h>
using namespace std; 
int main()
{ 
   long unsigned int a,b,c,d= 0;
   a = 0xD0ED;   //（GB18030)
   b = 0xE5AB;  
   c = 0xE2F9;   
   d = a + b + c;
   srand(d); 
   cout <<  (rand() % (200))+ 1 << '\t'; 
   cout << endl; 
return 0;
}
