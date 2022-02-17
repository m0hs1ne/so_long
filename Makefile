NAME    = so_long

SRCS    = main.c \
			fun/charCond.c fun/dataCount.c fun/ft_memcpy.c fun/ft_split.c \
			fun/ft_strjoin.c fun/ft_strlen.c fun/ft_strnstr.c fun/ini.c \
			fun/mapChecker.c fun/newLineCheck.c fun/setUpMap.c fun/displayMap.c \
			fun/mlxFun.c fun/setMotion.c fun/fillWin.c fun/pMove.c fun/upMove.c \
			fun/close.c fun/leftMove.c fun/rightMove.c fun/downMove.c fun/writeColor.c \
			fun/ft_itoa.c



FLGS    = cc -Werror -Wall -Wextra

RM        = rm -f

NONE='\033[0m'
GREEN='\033[32m'
YELLOW='\033[33m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all:  $(NAME) $(SRCS) 

$(NAME):   $(SRCS)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@$(FLGS) -lmlx -framework OpenGL -framework AppKit $(SRCS) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)

bonus: $(NAME)

play: all
	@echo $(YELLOW)"     - Playing all maps... \n"$(NONE)
	@./$(NAME) maps/big.ber
	@./$(NAME) maps/long.ber
	@./$(NAME) maps/map.ber
	@./$(NAME) maps/map1.ber
	@./$(NAME) maps/1337.ber
	@./$(NAME) maps/google.ber
	@./$(NAME) maps/island.ber

clean: 
	@echo $(GRAY)$(CURSIVE)" - Cleaning everything... \n"$(NONE)
	@$(RM) $(NAME)

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing so_long..." $(NONE)
	@$(RM) $(NAME)
re:            fclean all

.PHONY:        all clean fclean re