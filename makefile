.PHONY: dirs clean stat
CFLAGS=-std=c++11

all: dirs bin/ip_test bin/hello bin/ip
bin/hello: src/hello.cpp
	g++ $(CFLAGS) src/hello.cpp -o bin/hello -lgtest -lpthread
bin/ip: src/ip.cpp src/inner_product.h
	g++ $(CFLAGS) src/ip.cpp -o bin/ip -lgtest -lpthread
bin/ip_test: test/ip_test.cpp test/ip_test.h test/swap_test.h test/triangle_test.h src/inner_product.h src/triangle.h
	g++ $(CFLAGS) test/ip_test.cpp -o bin/ip_test -lgtest -lpthread
clean:
	rm -f bin/*
dirs:
	mkdir -p bin src
stat:
	wc test/* src/*
