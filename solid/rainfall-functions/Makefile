CFLAGS=-std=c++11 -Wall
CC=g++

run: rainfall
	./rainfall < rainfall.csv > report.txt

rainfall: rainfall.o rainfall_data.o
	$(CC) $(CFLAGS) rainfall_data.o rainfall.o -o rainfall

rainfall.o: rainfall_data.hpp rainfall.cpp
	$(CC) $(CFLAGS) -c rainfall.cpp

rainfall_data.o: rainfall_data.hpp rainfall_data.cpp
	$(CC) $(CFLAGS) -c rainfall_data.cpp

clean:
	rm -f rainfall *.o
