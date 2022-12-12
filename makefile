# Makefile with dependencies management (Q4)

CXX        = g++
CXXFLAGS   = -Wall  -std=c++20
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = date.cpp auteur.cpp livre.cpp  main.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = main
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)