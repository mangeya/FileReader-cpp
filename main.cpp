#include <iostream>
#include <fstream>
#include <map>
#include "functions.h"

using namespace std;

int main(int argc, char *argv[])
{
    // input all the words from the file and add to a map
    map<string, int> wordMap;
    string word;
    ifstream inFile;
    // open file from argument
    inFile.open(argv[1]);

    while (inFile >> word)
    {
        word = remove_non_alphabetical_characters(word);
        word = make_string_lowercase(word);
        if (!check_frequent_words(word))
        {
            continue;
        }
        wordMap[word]++;
    }
    inFile.close();

    // if only one argument is passed, make num_words = 20
    int num_words = 10;
    if (argc == 2){
        num_words = 10;
    }
    else if (argc == 3){
        num_words = atoi(argv[2]);
    }


    // print the top 10 words
    multimap<int, string, greater<int>> iMap;
    map<string, int>::iterator it;
    for (it = wordMap.begin(); it != wordMap.end(); it++)
    {
        iMap.insert(pair<int, string>(it->second, it->first));
    }
    int i = 0;
    // print the top 10 words
    for (map<int, string>::iterator it = iMap.begin(); it != iMap.end();)
    {
        i++;
        if (i == num_words + 1)
        {
            break;
        }
        int count = it->first;
        cout << i << ".) These words appeared " << it->first << " times: "
             << "{" << it->second;
        it++;
        while (it->first == count)
        {
            cout << ", " << it->second;
            it++;
        }
        cout << "}";
        cout << endl;
    }
    return 0;
}
