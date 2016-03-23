a.out : UsePoint.o Point.o Circle.o
	g++ UsePoint.o Point.o  Circle.o -o a.out

UsePoint.o: UsePoint.cpp
	g++ -c UsePoint.cpp

Point.o: Point.cpp
	g++ -c Point.cpp

Circle.o: Circle.cpp
	g++ -c Circle.cpp


clean:
	rm -f *.o