// #include <gtest/gtest.h>
#include <iostream>

int main(int argc, char ** argv) {
  if (argc == 2) {
    std::cout << "hello, " << argv[1] << "\n";
  }
  else {
    std::cout << "What's your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "hello, "<< name << "!" << std::endl;
  }

   // testing :: InitGoogleTest( &argc , argv ) ;
   // return RUN_ALL_TESTS( ) ;

}

// #include <iostream>
// #include <string>
//
// TEST (HelloTest, first) {
//   std::cout << "What's your name? ";
//   std::string name;
//   std::cin >> name;
//   std::cout << "hello, "<< name << "!" << std::endl;
// }
