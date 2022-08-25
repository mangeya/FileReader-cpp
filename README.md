# FileReader-cpp

Problem Description
Write a program that displays the top N most occurring words in a file along with the number of times the word appeared.

Words should be displayed from most commonly occurring to least commonly occurring

A word is considered to be 1 or more consecutive nonwhitespace characters

Case does not matter when counting words

HELLO and hello are to be considered the same word
When displaying the most commonly occurring words they should all be displayed in lowercase

When counting a word all leading and trailing non-alphabetical, non-numeric characters should be removed for a more accurate count

For example
hello
hello,
hello.
hello;
!!$#%hello<>?/ Are all considered to be the same word
The complete list of special characters is: \,.:;"|!@#$%^&*()_+-=[]{}<>?/~`'
If multiple words tie for most commonly occurring they should all be displayed

These words should be displayed in alphabetical order
You should ignore the following words when counting the most commonly occurring words because they are so frequent and aren't interesting

a, an, and, in, is, it the
If there are fewer than N unique occurrences of a word all words should be displayed

For example, if there were 5 unique words in a file but the user asked to display the top 10 words then only the top 5 will be displayed as there are only 5 words in the file
Input
All input will be valid

Command Line Arguments
The path to the file
Required
N, the number of top words to find
Optional
If N is not given it should default to 10
