OBJS = reciter.o sam.o render.o main.o debug.o

CC = gcc

# libsdl present
CFLAGS =  -Wall -Os -DUSESDL `sdl-config --cflags` -g
LFLAGS = `sdl-config --libs`

# no libsdl present
#CFLAGS =  -Wall -Os
#LFLAGS =

libsam.a: $(OBJS)
	ar rc $@ $(OBJS)

%.o: src/%.c
	$(CC) $(CFLAGS) -c $<

package:
	tar -cvzf sam.tar.gz README.md Makefile sing src/

clean:
	rm -f *.o

fclean: clean
	rm -f libsam.a

re: clean libsam.a

archive:
	rm -f sam_windows.zip
	cd ..; zip SAM/sam_windows.zip	SAM/sam.exe SAM/SDL.dll SAM/README.md SAM/demos/*.bat
