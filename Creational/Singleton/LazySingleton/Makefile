
CXX = g++
CXXFLAGS += -std=c++11
#LDFLAGS += -pthread

LazySingleton: LazySingleton.o ThreadSafeLazySingleton.o main.o
	$(CXX) $^ -o $@

clean:
	rm -rf *.o LazySingleton