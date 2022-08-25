#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "functions.h"
using namespace std;

// function to print iMap
void print_Map(multimap<int, string, greater<int>> iMap)
{
    multimap<int, string, greater<int>>::iterator it;
    for (it = iMap.begin(); it != iMap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

string make_string_lowercase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

string remove_non_alphabetical_characters(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isalnum(s[i]) && !(s[i] == '\'' && isalnum(s[i+1]) && isalnum(s[i-1])))
        {
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}

bool check_frequent_words(string s)
{
    if (s == "a" || s == "an" || s == "in" || s == "is" || s == "it" || s == "the" || s == "and")
    {
        return false;
    }
    return true;
}