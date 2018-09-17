
CROSS_COMPILE =
AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm

STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

export AS LD CC CPP AR NM
export STRIP OBJCOPY OBJDUMP


TOPDIR := $(shell pwd)
export TOPDIR

INC_PATH :=		-I$(TOPDIR)/inc \
				-I$(TOPDIR)/src/log/easy_log \
				-I$(TOPDIR)/common \

CFLAGS := -Wall -m32 -O0 -g $(INC_PATH)

LDFLAGS := -m32 -lpthread

export CFLAGS LDFLAGS

TARGET := test.exe


obj-y += src/

all : 
	make -C ./ -f $(TOPDIR)/Makefile.build
	$(CC)  -o $(TARGET) built-in.o $(LDFLAGS)


clean:
	rm -f $(shell find -name "*.o")
	rm -f $(shell find -name "*.d")
	rm -f $(TARGET)
.PHONY:all clean 
