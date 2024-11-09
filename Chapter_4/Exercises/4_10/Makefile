build: imperial_metric.cpp imperial_metric.h
	gcc imperial_metric.cpp test.cpp -o main

test: test.cpp imperial_metric.cpp imperial_metric.h
	gcc imperial_metric.cpp test.cpp -o test -lstdc++ -std=c++17 -lgtest -lpthread -lm
	./test
	
clean:
	rm -rf test

