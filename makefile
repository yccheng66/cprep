all: hello ip
hello: hello.cpp
	g++ hello.cpp -o hello -lgtest -lpthread
ip: ip.cpp
	g++ ip.cpp -o ip -lgtest -lpthread
clean:
	rm hello ip
