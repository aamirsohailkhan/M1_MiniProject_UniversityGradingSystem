
PROJECT_NAME = gradingsystem



ifdef OS
	RM = del /q
	Fixpath = $(subst /, \,$1)
	EXEC = exe

else
	ifeq ($(shell uname), Linux)
	RM = rm -rf
	Fixpath = $1
	EXEC = .out
	endif
endif


Build : 
	
	gcc main.c functions.h functions.c   -o grading.out -lm




run : Build:grading.out
	 ./grading.out

