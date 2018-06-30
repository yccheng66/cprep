#include <gtest/gtest.h>

using namespace std;
int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;

}

#include <iostream>
#include <string>

TEST (HelloTest, first) {
  cout << "What's your name? ";
  string name;
  cin >> name;
  cout << "hello, "<< name << "!" << endl;
}
