CP=g++
CPPFLAGS=-Wall -Wextra -Werror -pedantic -Weffc++

all:clean a.out

a.out:hello.cpp

	$(CP) $(CPPFLAGS) -o a.out hello.cpp




clean:
	rm  -f *~

	rm -f a.out

 
