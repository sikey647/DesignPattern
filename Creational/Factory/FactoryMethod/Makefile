
CXX = g++
CXXFLAGS += -std=c++11

FactoryMethod: ConcreteProductA.o ConcreteProductB.o ConcreteFactoryA.o ConcreteFactoryB.o FactoryManager.o main.o
	$(CXX) $^ -o $@

clean:
	rm -rf *.o FactoryMethod