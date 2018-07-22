all: dirs hello ip
hello: hello.cpp
	g++ hello.cpp -o bin/hello -lgtest -lpthread
ip: ip.cpp inner_product.h
	g++ ip.cpp -o bin/ip -lgtest -lpthread
clean:
	rm -f bin/*
dirs:
	mkdir -p bin
