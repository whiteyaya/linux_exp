main:main.c f1.o f2.o
	gcc -o $@ $^
f1.o:f1.h #缺省表示
f2.o:f2.h
clean:
	rm *.o main
