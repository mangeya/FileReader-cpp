

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <map>  
#include <string>  
#include "functions.cpp"

using namespace std;


void print_Map(multimap<int, string, greater<int>> iMap);
string make_string_lowercase(string s);
string remove_non_alphabetical_characters(string &s);
bool check_frequent_words(string s);


#endif
