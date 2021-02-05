main: main.cpp
	g++ 'main.cpp' -o 'main'

clean:
	rm  main

compile-run:
	g++ 'main.cpp' -o 'main'  && './main'

run:
	./main
