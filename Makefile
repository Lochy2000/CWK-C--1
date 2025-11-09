CXXFLAGS=-std=c++23 -pedantic -Wall -Wpointer-arith -Wwrite-strings
CXXFLAGS+=-Wcast-qual -Wcast-align -Wformat-security
CXXFLAGS+=-Wformat-nonliteral -Wmissing-format-attribute
CXXFLAGS+=-Winline -funsigned-char
CC=$(CXX)
