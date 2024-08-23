# 编译器
CC = gcc

# 编译选项
CFLAGS = -Wall -Wextra -O2 -std=c99

# 目标文件
TARGET = main

# 依赖文件
OBJS = main.o color.o

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 编译 main.c
main.o: main.c color.h
	$(CC) $(CFLAGS) -c main.c

# 编译 color.c
color.o: color.c color.h
	$(CC) $(CFLAGS) -c color.c

# 清理生成的文件
clean:
	rm -f $(TARGET) $(OBJS)

# 伪目标，不生成实际文件
.PHONY: all clean
