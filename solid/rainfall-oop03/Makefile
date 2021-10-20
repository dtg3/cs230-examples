CFLAGS=-std=c++11 -Wall
CC=g++

run: rainfall
	./rainfall < rainfall.csv > report.txt

rainfall: main.o rainfall.o average_rainfall_report.o max_rainfall_report.o csv_importer.o
	$(CC) $(CFLAGS) main.o average_rainfall_report.o max_rainfall_report.o csv_importer.o rainfall.o -o rainfall

main.o: rainfall.hpp main.cpp
	$(CC) $(CFLAGS) -c main.cpp

rainfall.o: rainfall.hpp data_importer.hpp report.hpp rainfall.cpp
	$(CC) $(CFLAGS) -c rainfall.cpp

csv_importer.o: data_importer.hpp csv_importer.hpp csv_importer.cpp
	$(CC) $(CFLAGS) -c csv_importer.cpp

average_rainfall_report.o: report.hpp average_rainfall_report.cpp
	$(CC) $(CFLAGS) -c average_rainfall_report.cpp

max_rainfall_report.o: report.hpp max_rainfall_report.cpp
	$(CC) $(CFLAGS) -c max_rainfall_report.cpp

clean:
	rm -f rainfall *.o
