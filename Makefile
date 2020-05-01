miniproject : main.c miniproject.o
	gcc -o $@ $^

clean :
	rm *.o miniproject
