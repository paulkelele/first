CC=gcc 
CFLAGS=-Wall
src/first: src/first.o src/lib/hello_fn.o 

clean:	
	sudo rm -rf src/*.o & sudo rm -rf src/lib/*.o


move:
	mv -f src/first dist/
