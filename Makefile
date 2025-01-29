CXX=g++

all: libmatrixOperation.so matrixProgram.o
	$(CXX) -o matrixProgram  matrixProgram.o -L. -lmatrixOperation

libmatrixOperation.so: matrixOperation.cpp
	$(CXX) -fPIC -c matrixOperation.cpp -o matrixOperation.o
	$(CXX) -shared  -o libmatrixOperation.so matrixOperation.o

clean:
	$ rm *.o *.so

exp:
	$ export LD_LIBRARY_PATH=.