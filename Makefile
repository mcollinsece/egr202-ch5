all: hw5-12 test_hw5-12 lab5-2 lab5-3 lab5-6 test_lab5-2 test_lab5-3 test_lab5-6

CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Werror

hw5-12: hw5-12.cpp
	$(CXX) $(CXXFLAGS) hw5-12.cpp -o hw5-12

hw5-15: hw5-15.cpp
	$(CXX) $(CXXFLAGS) hw5-15.cpp -o hw5-15

lab5-2: lab5-2.cpp
	$(CXX) $(CXXFLAGS) lab5-2.cpp -o lab5-2

lab5-3: lab5-3.cpp
	$(CXX) $(CXXFLAGS) lab5-3.cpp -o lab5-3	

lab5-6: lab5-6.cpp
	$(CXX) $(CXXFLAGS) lab5-6.cpp -o lab5-6	

test_hw5-12: ./test_files/test_hw5-12.cpp
	$(CXX) $(CXXFLAGS) ./test_files/test_hw5-12.cpp -o ./test_files/test_hw5-12

test_hw5-15: ./test_files/test_hw5-15.cpp
	$(CXX) $(CXXFLAGS) ./test_files/test_hw5-15.cpp -o ./test_files/test_hw5-15

test_lab5-2: ./test_files/test_lab5-2.cpp
	$(CXX) $(CXXFLAGS) ./test_files/test_lab5-2.cpp -o ./test_files/test_lab5-2	

test_lab5-3: ./test_files/test_lab5-3.cpp
	$(CXX) $(CXXFLAGS) ./test_files/test_lab5-3.cpp -o ./test_files/test_lab5-3	

test_lab5-6: ./test_files/test_lab5-6.cpp
	$(CXX) $(CXXFLAGS) ./test_files/test_lab5-6.cpp -o ./test_files/test_lab5-6	

clean:
	rm -f hw5-12 hw5-15 ./test_files/test_hw5-12 ./test_files/test_hw5-15 lab5-2 lab5-3 lab5-6 ./test_files/test_lab5-2 ./test_files/test_lab5-3 ./test_files/test_lab5-6