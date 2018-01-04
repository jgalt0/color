//provides macros for colored output in the terminal
//unix only
#ifndef color_hpp
#define color_hpp

//sets colors  back to normal
#define reset   "\033[0m"

//for none-bold text
#define black   "\033[30m"
#define red     "\033[31m"
#define green   "\033[32m"
#define yellow  "\033[33m"
#define blue    "\033[34m"
#define magenta "\033[35m"
#define cyan    "\033[36m"
#define white   "\033[37m"

//for bold text
#define boldblack   "\033[1m\033[30m"
#define boldred     "\033[1m\033[31m"
#define boldgreen   "\033[1m\033[32m"
#define boldyellow  "\033[1m\033[33m"
#define boldblue    "\033[1m\033[34m"
#define boldmagenta "\033[1m\033[35m"
#define boldcyan    "\033[1m\033[36m"
#define boldwhite   "\033[1m\033[37m"

#endif
