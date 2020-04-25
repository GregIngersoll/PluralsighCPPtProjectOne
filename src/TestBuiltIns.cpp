#include <iostream>
#include <vector>
#include <string>

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

   std::cout << "i1= " << i1 << std::endl;
   std::cout << "i2 = " << i2 << std::endl;
   std::cout << "i3 = " << i3 << std::endl;
   std::cout << "i4 = " << i4 << std::endl;
   std::cout << "d1= " << d1 << std::endl;
   std::cout << "d2= " << d2 << std::endl;
   std::cout << "i5= " << i5 << std::endl;

   char c1 = 'a';
   std::string c2 = "b";
   std::cout << "c1= " << c1 << std::endl;
   std::cout << "c2= " << c2 << std::endl;

   bool flag = false;

   std::cout << "flag= " << flag << std::endl;

   flag = i1;
   std::cout << "flag= " << flag << std::endl;
   flag = d1;
   std::cout << "flag= " << flag << std::endl;

   auto a1 = 1;
   auto a2 = 2.2;
   auto a3 = 'c';
   auto a4 = "s";
   auto a5 = true;
   auto a6 = 3L;
   auto a7 = 1'000'000'000'000;
   auto a8 = 0xFF;   // 255
   auto a9 = 0b111;  // 7

   std::cout << "a1 " << a1 << std::endl;
   std::cout << "a2 " << a2 << std::endl;
   std::cout << "a3 " << a3 << std::endl;
   std::cout << "a4 " << a4 << std::endl;
   std::cout << "a5 " << a5 << std::endl;
   std::cout << "a6 " << a6 << std::endl;
   std::cout << "a7 " << a7 << std::endl;
   std::cout << "a8 " << a8 << std::endl;

   a1 = static_cast<char> (a2);

   std::cout << "a9 " << a9 << std::endl;

   unsigned char n1 =128;
//    char n2 = static_cast <int> (128);
   std::cout << "n1 " << n1 << std::endl;
//    std::cout << "n2 " << n2 << std::endl;

   n1 = 254;
//    n2 = static_cast<char> (254);
   std::cout << "n1 " << n1 << std::endl;
//    std::cout << "n2 " << n2 << std::endl;
}
