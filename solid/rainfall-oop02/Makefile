CFLAGS=-std=c++11 -Wall
CC=g++

run: rainfall
	./rainfall < rainfall.csv > report.txt

rainfall: main.o rainfall.o rainfall_report.o rainfall_importer.o
	$(CC) $(CFLAGS) main.o rainfall.o rainfall_report.o rainfall_importer.o -o rainfall

main.o: rainfall.hpp main.cpp
	$(CC) $(CFLAGS) -c main.cpp

rainfall.o: rainfall.hpp rainfall_importer.hpp rainfall.cpp
	$(CC) $(CFLAGS) -c rainfall.cpp

rainfall_report.o: rainfall.hpp rainfall_report.cpp
	$(CC) $(CFLAGS) -c rainfall_report.cpp

rainfall_importer.o: rainfall_importer.hpp rainfall_importer.cpp
	$(CC) $(CFLAGS) -c rainfall_importer.cpp

clean:
	rm -f rainfall *.o
