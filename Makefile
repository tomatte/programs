SRC			=	main.c \
				add_program.c \
				lst_add_back.c \
				lst_new.c \

NAME		=	program

OBJS_DIR	=	objects

OBJS			=	$(patsubst %.c,$(OBJS_DIR)/%.o, $(SRC))

VPATH		=	./src \
				./src/list \

CFLAGS		=	-I./

HEADERS		=	./includes.h

CC					=	cc

$(OBJS_DIR)/%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) $(HEADERS)



$(OBJS_DIR):
		mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(OBJS) ${CFLAGS} -o $@

clean:
	rm -rf ${OBJS_DIR} 

fclean:	clean
	rm -f ${NAME}
re: fclean all

.PHONY:	all clean fclean re