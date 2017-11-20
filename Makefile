RM = del
CC = g++
ARGS = -Wall
SOURCES = Main.cpp Game.cpp File.cpp Player.cpp Item.cpp Inventory.cpp Area.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = RPG

#all: rpg ;
all: $(SOURCES) $(EXECUTABLE) ;

run:
	$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(ARGS) $(OBJECTS) -o $@.exe

.cpp.o: $<
	$(CC) $(ARGS) -c $<

%.o: %.cpp %.h
	$(CC) $(ARGS) -c $<

clean:
	$(RM) -f *.o
