ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libcb_sasl.la

libcb_sasl_la_includedir = $(libdir)
libcb_sasl_la_SOURCES = \
						config_static.h \
						trace.h \
						daemon/isasl.c \
						daemon/isasl.h

libcb_sasl_la_CPPFLAGS = $(CPPFLAGS) -g -I$(top_srcdir)/include
libcb_sasl_la_LDFLAGS = -R '$(pkglibdir)' -R '$(libdir)'
libcb_sasl_la_CFLAGS = -std=c99

check_PROGRAMS=\
			   binary-sasl

TESTS=${check_PROGRAMS}
TEST_TIMEOUT = 30

basic_sasl_test_CPPFLAGS = $(CPPFLAGS) -I$(top_srcdir)/include

test: all check-TESTS
