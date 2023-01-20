#include <stdio.h>
#include <stdint.h>
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

/* Normal colors */
#define N "\033[0m"
#define BLACK "\033[30"
#define GREY "\033[22;90m"
#define RED "\033[22;91m"
#define GREEN "\033[22;92m"
#define YELLOW "\033[22;93m"
#define BLUE "\033[22;94m"
#define PURPLE "\033[22;95m"
#define CYAN "\033[22;96m"
#define WHITE "\033[22;97m"

/* Light colors */
#define LGREY "\033[05;30m"
#define LRED "\033[05;31m"
#define LGREEN "\033[05;32m"
#define LYELLOW "\033[05;33m"
#define LBLUE "\033[05;34m"
#define LPURPLE "\033[05;35m"
#define LCYAN "\033[05;36m"
#define LWHITE "\033[05;37m"

/* Block colors */
#define BGREY "\033[07;30m"
#define BRED "\033[07;31m"
#define BGREEN "\033[07;32m"
#define BYELLOW "\033[07;33m"

/* Software desc */
#define PROG "cputemp"
#define PROG_VER "v1.0.0"
#define OWNER "wong-fi-hung@github.com"
#define DATE "20/01/2023"

int fdold,count;
char buffer[409676];
//[409676];
