CFLAGS=-std=c++11

all: dirs bin/ip_test bin/hello bin/ip
bin/hello: hello.cpp
	g++ $(CFLAGS) hello.cpp -o bin/hello -lgtest -lpthread
bin/ip: ip.cpp inner_product.h
	g++ $(CFLAGS) ip.cpp -o bin/ip -lgtest -lpthread
bin/ip_test: test/ip_test.cpp test/ip_test.h test/swap_test.h test/triangle_test.h inner_product.h triangle.h
	g++ $(CFLAGS) test/ip_test.cpp -o bin/ip_test -lgtest -lpthread
clean:
	rm -f bin/*
dirs:
	mkdir -p bin
stat:
	wc *.cpp *.h test/*
