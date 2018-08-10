# Problem 1

In a unix-like operating system, you could fire up a console application and type a command. To do this you first run the console program. For example, in OSX, the console is launched with by running "term". Inside the console, you could run a program. For example, typing "date <ret>" gives you the current date. In this case, the program "date" is a system app located in directory /bin. You can also run a program you have previously built. For example, if the program "hello" in in your current directory, you run it by typing "./hello".

The problem is to write a program that asks the user to type in his/her name on the _console input_, and print the string "Hello, _name_", where _name_ is what the user previous typed for his/her name on the _console output_.

## Tasks (HTSI - plans)
- (Eng) What is program in c/cpp?
  - computer, os, program (console app)
- (Eng) Program
  - source: what programmer writes in C/C++
  - binary: what computer runs, beginning with the entry point main
  - installing g++ for mac (xcode): xcode-select --install
  - editing a cpp program with atom, vi, vim, etc.
- (Lan) What is the entry point of a cpp program
  - How to write the main function?
- (Eng) How to build a program?
  - command line: g++
  - make and makefile
- (Lan) How to print to console out?
  - console output (standard output stream): cout (c++)
  - stream insertion operator <<
  - standard library: std:cout
- (Lan) How to read from console in?
  - console input (standard input stream): cin (c++)
  - stream extraction operator >>
  - standard library: std:cin
  - string: std::string
- (Eng) How to do version control with git?
   - git init
   - git status
   - git add .
   - git commit -m "message"
   - git log --oneline
   - git checkout _commit_: checkout a previous commit
   - git branch _branch_: create a new branch
   - git checkout _branch_: switch to a branch
   - git branch : show all branches
   - git remote -v : show url of the remote
   - git remote rm origin; rm .git/FETCH_HEAD : unlink local from remote

# Problem 2
   Prompt the user to input two vectors. Compute the inner product (or dot product) of two vectors when it is defined. For example,
       [1, 0] · [1, 1] = 1,
       [1, 1, 0] · [0, 1, 1] = 1, and
       [1,0] · [1,1,0] => undefined.
   Prompt the user whether to continue or stop.

## Tasks (HTSI - plans)

- (Eng) How to test our program?
  - console output
  - unit tests with Google test
  - [installing google test](http://hack.limbicmedia.ca/installing-google-test/)
  - data (given), operation (when), result (then)
  - test driven development (TDD)
- (Lan) How to write a function
  - name, parameters, return type
  - parameter passing: call by value
  - overloading: inner products for 2d and 3d vectors
- (Eng) Separations: more structure to your project
  - production code from test: use of header file
  - binaries from source
  - git rm _binaries_
- (Lan) Array: multiple variables of the same type
  - memory model of variables and array of variables
  - separate tests from production
  - main program: once only
- (Eng) refactoring: extract function to cut duplicated code
- (Lan) call by value (pointer) and call by reference
  - digress: exchange
- (Lan) C++ array for better dimension handling
  - template
  - template function
  - exception handling
  - angle between two vectors
- (Lan) C++ Standard template library
  - algorithms: sorting, searching, ...  
  - containers: array, list, vector, map, ...
- (Lan) C++ object: triangle
  - data and function together
  - constructor/destructor
