lst05-11.o: lst05-11.c++ lst05-11.h
	g++ *c lst05-11.c++
#
lst05-12: lst05-12.c++ lst05-11.o lst05-11.h
	g++ lst05-12.c++ lst05-11.O -o lst05-12
