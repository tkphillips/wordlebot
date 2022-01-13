#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string>
#include<sstream>
using namespace std;

/*************************************************************************
WORDLE:
The word can be any five letter word.
Green letters are in the correct possition 
Yellow letters are not in the correct position but are in the word
Gray letters are not in the word
You only get 6 guesses and all guesses have to be real words
***************************************************************************/

struct green{
    int pos;
    char letter;
};

vector<string> findAcceptableWords(vector<green> green, vector<char> yellow, vector<char> gray){
    vector<string> words;
    //find words that work

    //return vector of those words
    return words;
}

string findOptimalWordInList(vector<string> words){
    string bestWord;
    //find best word

    //return best word
    return bestWord;
}

int main () {
    //Guess TRACE???

    return 0;
}