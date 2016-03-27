CC=g++

SRCS=main.cpp\
	a.cpp\

EXEC=myapp

OBJS=$(SRCS:.cpp=.o)

start: $(OBJS) 
	$(CC) -o $(EXEC) $(OBJS)

.cpp.o:
	$(CC) -o $@ -c $<

clean:
	rm -rf $(OBJS)

