hello: hello.cpp
	g++ hello.cpp -o hello -lgtest -lpthread
clean:
	rm hello
