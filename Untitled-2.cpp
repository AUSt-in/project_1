
/*
Name: Austin Pereira
Compiler: VS CODE and ZYBOOK
Date: Feb 6 2022
Professor: Delia Garbecea
*/
#include <iostream>
#include <string>   
using namespace std;


// Function prototypes
int GetNumOfNonWSCharacters(const string userInput);
int GetNumOfWords(const string userInput);
int FindText(string word2Find,const string userInput);
string ReplaceExclamation(string& userInput);
string ShortenSpace(string& userInput);
char PrintMenu(string userInput);


int main() {
    char choice;
    string userInputText;
    cout << "Enter a sample text:" << endl;
    getline(cin, userInputText); // inputs text
    cout << "\nYou entered: " << userInputText;
    while (choice != 'q') {   
        choice = PrintMenu(userInputText);   
    } return 0;
}

int GetNumOfNonWSCharacters(const string userInput) {  
    int j = 0;   
    for (int i = 0; i < userInput.size(); i++) {  
        if (userInput.at(i) != ' ' ) { 
            j++; 
        } 
    }
    return j;  
    
} 

int GetNumOfWords(const string userInput) {   
    
    int j = 1;  
    
    for (int i = 0; i < userInput.size(); i++) { 
        
        if (userInput.at(i) == ' ' && userInput.at(i + 1) != ' ') { 
            j++; 
        }
    }  
    return j; 
     
} 




int FindText(string word2Find,const string userInput) {  
    int instances = 0; 
    int letterCounter = 0;   
    for (int i = 0; i < userInput.size(); i++) { 
        if  (userInput.at(i) == word2Find.at(letterCounter)) {  
            letterCounter++;
            if (letterCounter == word2Find.size()) { 
                letterCounter = 0;
                instances++;
            } 
        } else if (userInput.at(i) != word2Find.at(letterCounter)) {
            letterCounter = 0;
        } 
    }
    return instances; 
}



string ReplaceExclamation(string& userInput) {
    for (int i = 0; i < userInput.size(); i++) {
        if (userInput.at(i) == '!' ) {
            userInput.at(i) = '.';
        } 
    } 
    return userInput;
} 


string ShortenSpace(string& userInput) {     
    string x;
    for (int i = 0; i < userInput.size(); i++) {
        if (i == userInput.length()-1) {
            x += userInput.at(i);
            break;
        } // end 1st if statment
        if (userInput.at(i) == ' '  && userInput.at(i + 1) == ' ' ) {
            continue;
        } else {
            x += userInput.at(i);
        } 
    }  userInput = x; 
    return userInput;
} 

char PrintMenu(string userInput) {  
    char choice;
    string findWord;
    
    while (true) {  
        cout << endl;
        cout << "MENU" << endl;
        cout << "c - Number of non-whitespace characters" << endl;
        cout << "w - Number of words" << endl;
        cout << "f - Find text" << endl;
        cout << "r - Replace all !'s" << endl;
        cout << "s - Shorten spaces" << endl;
        cout << "q - Quit" << endl << endl;

        cout << "Choose an option:";
        cin >> choice;

        switch (choice){

        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userInput) << endl; 
            break;

        case 'w':
            cout << "Number of words: " << GetNumOfWords(userInput) << endl; 
            break;

        case 'f':
             cin.ignore();
            cout << "Enter a word or phrase to be found:";
            getline(cin, findWord);
            cout << "\"" << findWord << "\" " << "instances: " << FindText(findWord, userInput) << endl; 
            break;

        case 'r':
            cout << "Edited text: " << ReplaceExclamation(userInput) << endl; 
            break;

        case 's':
            cout << "Edited text: " << ShortenSpace(userInput) << endl; 
            break;

        case 'q':
            return choice; 
        } 
    } 
} 