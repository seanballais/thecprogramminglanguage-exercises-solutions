CC=cc
CFLAGS=-Wall -O3
CMP=$(CC) $(CFLAGS)
MKDIR_P=mkdir -p

#################
#				#
# Make commands #
# 				#
#################
all: chapter01
chapter01: chapter01-dir chapter01-exer01 chapter01-exer02 chapter01-exero3 chapter01-exer01 chapter01-exer05

##################################
#								 #
# Compile Chapter 1 source codes #
# 								 #
##################################
CHAPTER=chapter01

chapter01-dir:
	$(MKDIR_P) bin/$(CHAPTER)/

chapter01-exer01: src/chapter01/exer01.c
	$(CMP) src/$(CHAPTER)/exer01.c -o bin/$(CHAPTER)/exer01

chapter01-exer02: src/chapter01/exer02.c
	$(CMP) src/$(CHAPTER)/exer02.c -o bin/$(CHAPTER)/exer02

chapter01-exero3: src/chapter01/exer03.c
	$(CMP) src/$(CHAPTER)/exer03.c -o bin/$(CHAPTER)/exer03

chapter01-exer04: src/chapter01/exer04.c
	$(CMP) src/$(CHAPTER)/exer04.c -o bin/$(CHAPTER)/exer04

chapter01-exer05: src/chapter01/exer05.c
	$(CMP) src/$(CHAPTER)/exer05.c -o bin/$(CHAPTER)/exer05