CC=cc
CFLAGS=-Wall -g -std=c11
CMP=$(CC) $(CFLAGS)
MKDIR_P=mkdir -p

#################
#				#
# Make commands #
# 				#
#################
all: chapter01
chapter01: chapter01-dir chapter01-exer01 chapter01-exer02 chapter01-exero3 chapter01-exer01 chapter01-exer05 chapter01-exer06 chapter01-exer07 chapter01-exer08 chapter01-exer09 chapter01-exer10 chapter01-exer12 chapter01-exer13 chapter01-exer14 chapter01-exer15 chapter01-exer16 chapter01-exer17 chapter01-exer18 chapter01-exer19

##################################
#								 #
# Compile Chapter 1 source codes #
# 								 #
##################################
chapter01-dir:
	$(MKDIR_P) bin/chapter01/

chapter01-exer01: src/chapter01/exer01.c
	$(CMP) src/chapter01/exer01.c -o bin/chapter01/exer01

chapter01-exer02: src/chapter01/exer02.c
	$(CMP) src/chapter01/exer02.c -o bin/chapter01/exer02

chapter01-exero3: src/chapter01/exer03.c
	$(CMP) src/chapter01/exer03.c -o bin/chapter01/exer03

chapter01-exer04: src/chapter01/exer04.c
	$(CMP) src/chapter01/exer04.c -o bin/chapter01/exer04

chapter01-exer05: src/chapter01/exer05.c
	$(CMP) src/chapter01/exer05.c -o bin/chapter01/exer05

chapter01-exer06: src/chapter01/exer06.c
	$(CMP) src/chapter01/exer06.c -o bin/chapter01/exer06

chapter01-exer07: src/chapter01/exer07.c
	$(CMP) src/chapter01/exer07.c -o bin/chapter01/exer07

chapter01-exer08: src/chapter01/exer08.c
	$(CMP) src/chapter01/exer08.c -o bin/chapter01/exer08

chapter01-exer09: src/chapter01/exer09.c
	$(CMP) src/chapter01/exer09.c -o bin/chapter01/exer09

chapter01-exer10: src/chapter01/exer10.c
	$(CMP) src/chapter01/exer10.c -o bin/chapter01/exer10

# Chapter 1 - Exercise 11 has not been included in the build file because the answer is text-only.

chapter01-exer12: src/chapter01/exer12.c
	$(CMP) src/chapter01/exer12.c -o bin/chapter01/exer12

chapter01-exer13: src/chapter01/exer13.c
	$(CMP) src/chapter01/exer13.c -o bin/chapter01/exer13

chapter01-exer14: src/chapter01/exer14.c
	$(CMP) src/chapter01/exer14.c -o bin/chapter01/exer14

chapter01-exer15: src/chapter01/exer15.c
	$(CMP) src/chapter01/exer15.c -o bin/chapter01/exer15

chapter01-exer16: src/chapter01/exer16.c
	$(CMP) src/chapter01/exer16.c -o bin/chapter01/exer16

chapter01-exer17: src/chapter01/exer17.c
	$(CMP) src/chapter01/exer17.c -o bin/chapter01/exer17

chapter01-exer18: src/chapter01/exer18.c
	$(CMP) src/chapter01/exer18.c -o bin/chapter01/exer18

chapter01-exer19: src/chapter01/exer19.c
	$(CMP) src/chapter01/exer19.c -o bin/chapter01/exer19
