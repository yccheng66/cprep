#include <iostream>
#include <string>

int main(int argc, char ** argv) {
  std::cout << "What's your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "hello, "<< name << "!" << std::endl;
  return 0;
}
