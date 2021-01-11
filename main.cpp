#include <iostream>

int main() {
  std::string quote;
  std::string author;
  std::cout << "What is the quote\n";
  //std::cin >> quote;
  getline(std::cin, quote);
  std:: cout << "Who said it\n";
  //std::cin >> author;
  getline(std::cin , author);
  std::cout << "\n" << author << " says: \"" << quote << "\"\n";
    return 0;
    
}
