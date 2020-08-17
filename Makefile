CC = gcc
EXE = ctr
OBJS = ctr.o converter.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(EXE)

%.o: %.c
	$(CC) -c $^

clean:
	rm $(OBJS)
	rm $(EXE)
