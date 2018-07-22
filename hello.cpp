#include <gtest/gtest.h>

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;

}

#include <iostream>
#include <string>

TEST (HelloTest, first) {
  std::cout << "What's your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "hello, "<< name << "!" << std::endl;
}
