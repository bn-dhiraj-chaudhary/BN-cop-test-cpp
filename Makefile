CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: BN-cop-test-cpp

BN-cop-test-cpp: src/main.cpp
	$(CXX) $(CXXFLAGS) -o BN-cop-test-cpp src/main.cpp

clean:
	rm -f BN-cop-test-cpp
