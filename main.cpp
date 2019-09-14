#include <iostream>
#include <funcA.h>
#include <foo/foo.h>

int main()
{
     std::cout << "Hello, World!" << std::endl;
     std::cout << funcA( 1, 1 ) << "\t" << funcA( 1, 2 ) << std::endl;
     std::cout << foo::nequ( 1, 1 ) << "\t" << foo::nequ( 1, 2 ) << std::endl;
     return 0;
}