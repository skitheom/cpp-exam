NAME		:= warlock
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++11
SRCS		:= ASpell.cpp  ATarget.cpp Dummy.cpp Fwoosh.cpp \
			   Warlock.cpp main.cpp
OBJS		:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	@echo "== Running Tests  =="
	./$(NAME)
	@echo "== Tests Completed =="

test: $(NAME)
	./$(NAME) | cat -e > output.txt
	diff -u expected_output.txt output.txt && echo "OK" || echo "KO"
	rm output.txt

.PHONY: all clean fclean re run test
