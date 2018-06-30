#include <iostream>
#include <string>

using namespace std;
int main(int argc, char ** argv) {
  cout << "What's your name? ";
  string name;
  cin >> name;
  cout << "hello, "<< name << "!" << endl;
  return 0;
}
