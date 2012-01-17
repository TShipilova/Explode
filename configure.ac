AC_PREREQ([2,68])
#Includes
m4_include([m4/ax_boost_base.m4])
m4_include([m4/ax_boost_filesystem.m4])
#-----------------
AC_INIT([exposive],[0.0],[illusion.of.life92@gmail.com])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE
AC_PROG_CXX
AC_LANG([C++])
AC_CHECK_LIB([m],[pow])
AC_CHECK_LIB([SDL],[SDL_Init],[],
        [AC_MSG_ERROR(You need the SDL development library.)])
#Double square braces required because... required
AC_COMPILE_IFELSE(
        [AC_LANG_SOURCE( [ int main(){return [[]](){return 0;}();} ]) ], 
        [] ,
        [AC_MSG_WARN(Compiler do not support c++0x natively)])
CXX="${CXX} -std=c++0x"
AC_COMPILE_IFELSE(
        [AC_LANG_SOURCE( [ int main(){return [[]](){return 0;}();} ]) ], [] ,
        [AC_MSG_ERROR(Compiler do not support c++0x. Do something with it.)])


AC_CHECK_HEADERS([SDL/SDL.h], [],
    [AC_MSG_ERROR(You need the SDL development library.)])

AX_BOOST_BASE([1.35], [], [AC_MSG_ERROR(Fail to find Boost library >=1.35)])
AX_BOOST_FILESYSTEM

AC_CONFIG_FILES([Makefile
                                        src/Makefile
                                        doc/Makefile
                                        contrib/Makefile])

AC_OUTPUT
