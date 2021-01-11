#include <iostream>
#include <string>

int main() {
  std::string width;
  std::string length;
  
  std::cout << "Input Width\n";

  getline(std::cin, width);
  int x = stoi(width);
  std::cout << "Input Length\n";

  getline(std::cin, length);
  int l = stoi(length);

  std::cout << "Your room’s dimension is " << l << " by " << x << "feet, the area is:";
  std::cout << "\n" << l * x << " Square foot " << "\n";
  int metres = (l * x)/10.764;
  std::cout << "\n" << metres << " Square metres " << "\n";

  return 0;
}
