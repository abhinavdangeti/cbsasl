#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], abhinav@couchbase.com)
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([daemon/isasl.c])
AC_CONFIG_HEADERS([config.h])
AC_PROG_LIBTOOL

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdint.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_UINT32_T
AC_TYPE_SIZE_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_CHECK_FUNCS([strdup strerror])
AC_CONFIG_FILES(Makefile)
AC_OUTPUT
