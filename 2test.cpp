#include <algorithm>
#include <iostream>
#include <string>

int main() {
   auto i{ 0x000020d1 };
   std::string x{" FMaiory"};
   while(i--) std::next_permutation(x.begin(), x.end());
   std::cout << x;
}