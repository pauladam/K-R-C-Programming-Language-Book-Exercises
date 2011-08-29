#!/bin/bash

# Exercise 1-11
# ================================================================
# How would you test the word count program? What kinds of input
# are most likely to uncover bugs if there are any?

echo "Test 1,"
test_2_words= echo "foo foo" | ../bin/wordcount 
echo
echo "Test 2,"
test_5_words= echo "one two three four five" | ../bin/wordcount
echo
echo "Test 3,"
test_file= cat 1-5.c | ../bin/wordcount
echo
