# Program conf
NAME		:= libft_test

# Compilation Parameters

CC			:= clang
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -f

# Includes
INC			:= ../libft.h
# Sources
SRCS	:= 	../ft_isalpha.c\
			../ft_isdigit.c\
			../ft_isalnum.c\
			../ft_isascii.c\
			../ft_isprint.c\
			../ft_toupper.c\
			../ft_tolower.c\
			../ft_strlen.c\
			../ft_memcpy.c\
			../ft_strlcpy.c\
			../ft_strlcat.c\
			../ft_strchr.c\
			../ft_strrchr.c\
			../ft_strncmp.c\
			../ft_strnstr.c\
			../ft_atoi.c\
			../ft_memset.c\
			../ft_bzero.c\
			../ft_memmove.c\
			../ft_memchr.c\
			my_test.main.c\
			# ft_putchar_fd.c\
			# ft_putstr_fd.c\
			# ft_isdigit.c\
			# ft_memcmp.c\
			# ft_strmapi.c\
			# ft_toupper.c\
			# ft_calloc.c\
			# ft_memccpy.c\
			# ft_putnbr_fd.c\
			# ft_strjoin.c\
			# ft_putendl_fd.c\
			# ft_itoa.c\
			# ft_strdup.c\
			# ft_substr.c\
			# ft_strtrim.c\
			# ft_split.c\
			# ft_striteri.c


# SRCS_B	:=	ft_lstnew.c

# Object files
OBJS 		:= ${SRCS:.c=.o}
# OBJS_B 		:= ${SRCS_B:.c=.o}

# Targets
all: 		${NAME}

${NAME}		:	${OBJS}
				${CC} -lbsd ${CFLAGS} ${OBJS} -o ${NAME}
				@echo "Test is Ready"

# bonus		:	${OBJS_B}
# 				ar rcs ${NAME} ${OBJS_B}
# 				@echo "Libft with Bonus is Ready"
				
#Utils
clean		:
	@${RM} ${OBJS}
	@echo "Test is Cleaned"

fclean		:	clean
	@${RM} ${NAME}
	@echo "Test is Full Cleaned"	

re			:	fclean all

.PHONY		:	all clean fclean re bonus