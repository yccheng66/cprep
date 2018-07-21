# Problem 1

In a unix-like operating system, you could fire up a console application and type a command. To do this you first run the console program. For example, in OSX, the console is launched with by running "term". Inside the console, you could run a program. For example, typing "date <ret>" gives you the current date. In this case, the program "date" is a system app located in directory /bin. You can also run a program you have previously built. For example, if the program "hello" in in your current directory, you run it by typing "./hello".

The problem is to write a program that asks the user to type in his/her name on the _console input_, and print the string "Hello, <name>", where <name> is what the user previous typed for his/her name on the _console output_.

## Tasks (HTSI - plans)
- (Eng) What is program in c/cpp?
  - computer, os, program (console app)
- (Eng) Program
  - source: what programmer writes in C/C++
  - binary: what computer runs, beginning with the entry point main
- (Eng) How do I type a cpp program?
 - atom, vi, vim, etc.
- (Prog) How to write the main function?
- ~~(Eng) How to build a program?~~
  - command line: g++
  - make and makefile
- (Prog) How to print to console out?
  - console output (standard output stream): cout (c++)
  - stream insertion operator <<
  - standard library: std:cout
- (Prog) How to read from console in?
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
   - git checkout <<version>>
- (Eng) How to test our program?
  - console output
  - unit tests with Google test
