main : Main.o Subject.o Student.o
	g++ Subject.o Main.o Student.o -o main

Subject.o: Subject.cpp
	g++ -c Subject.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

Student.o: Student.cpp
	g++ -c Student.cpp

clean:
	rm -f Main.o Student.o Subject.o