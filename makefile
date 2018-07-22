all: dirs ip_test hello ip
hello: hello.cpp
	g++ hello.cpp -o bin/hello -lgtest -lpthread
ip: ip.cpp inner_product.h
	g++ ip.cpp -o bin/ip -lgtest -lpthread
ip_test: test/ip_test.cpp test/ip_test.h test/swap_test.h inner_product.h
	g++ test/ip_test.cpp -o bin/ip_test -lgtest -lpthread
clean:
	rm -f bin/*
dirs:
	mkdir -p bin
