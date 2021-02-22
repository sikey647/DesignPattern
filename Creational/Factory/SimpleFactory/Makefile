
CXX = g++
CXXFLAGS += -std=c++11

SimpleFactory: ConcreteProductA.o ConcreteProductB.o ProductFactory.o main.o
	$(CXX) $^ -o $@

clean:
	rm -rf *.o SimpleFactory