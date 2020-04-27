#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void FlowOfControl()
{
   cout << "Enter two integers" << endl;

   int x;
   int y;
   cin >> x >> y;

   cout << "x = " << x << endl;;
   cout << "y = " << y << endl;
   if (x > y)
   {
      cout << "x is larger than y" << endl;
   }
   else if (y > x)
   {
      cout << "y is larger than x" << endl;
   }
   else
   {
      cout << "x and y are equal";
   }

   cout << "Enter one number" << endl;
   int z;
   cin >> z;

   cout << "z = " << z << endl;

   bool prime = true;
   int i = 2;

   while (i <= z/2)
   {
      int factor = z/i;
      if ((factor * i) == z)
      {
         cout << "Factor found: " << i << " * " << factor << endl;
         prime = false;
      }
      i += 1;
   }
 
   if (prime)
   {
      cout << "Number is prime" << endl;
   }
   else
   {
      cout << "Number is not prime" << endl;
   }
   
}