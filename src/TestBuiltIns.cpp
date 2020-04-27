#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;

void TestBuiltIns (void)
{
      int i1 = 1;
   int i2;
   i2 = 2;
   int i3(3);

   int i4{ 4 };

   double d1 = 2.2;
   double d2 = i1;

   int i5 = static_cast<int>(d1);

   cout << "i1= " << i1 << endl;
   cout << "i2 = " << i2 << endl;
   cout << "i3 = " << i3 << endl;
   cout << "i4 = " << i4 << endl;
   cout << "d1= " << d1 << endl;
   cout << "d2= " << d2 << endl;
   cout << "i5= " << i5 << endl;

   char c1 = 'a';
   string c2 = "b";
   cout << "c1= " << c1 << endl;
   cout << "c2= " << c2 << endl;

   bool flag = false;

   cout << "flag= " << flag << endl;

   flag = i1;
   cout << "flag= " << flag << endl;
   flag = static_cast <bool>(d1);
   cout << "flag= " << flag << endl;

   auto a1 = 1;
   auto a2 = 2.2;
   auto a3 = 'c';
   auto a4 = "s";
   auto a5 = true;
   auto a6 = 3L;
   auto a7 = 1'000'000'000'000;
   auto a8 = 0xFF;   // 255
   auto a9 = 0b111;  // 7

   cout << "a1 " << a1 << endl;
   cout << "a2 " << a2 << endl;
   cout << "a3 " << a3 << endl;
   cout << "a4 " << a4 << endl;
   cout << "a5 " << a5 << endl;
   cout << "a6 " << a6 << endl;
   cout << "a7 " << a7 << endl;
   cout << "a8 " << a8 << endl;

   a1 = static_cast<char> (a2);

   cout << "a9 " << a9 << endl;

   unsigned char n1 =128;
//    char n2 = static_cast <int> (128);
   cout << "n1 " << n1 << endl;
//    cout << "n2 " << n2 << endl;

   n1 = 254;
//    n2 = static_cast<char> (254);
   cout << "n1 " << n1 << endl;
//    cout << "n2 " << n2 << endl;
}
