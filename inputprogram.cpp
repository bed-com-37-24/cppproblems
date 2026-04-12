#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string Reverse(string text) {
    string reversed = "";
    for(int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

string capitalizeSecondLetter(string text) {
    string result = "";
    int wordStart = 0;
    
    for(int i = 0; i <= text.length(); i++) {
        if(i == text.length() || text[i] == ' ') {
            string word = text.substr(wordStart, i - wordStart);
            if(word.length() >= 2) {
                word[1] = toupper(word[1]);
            }
            result += word;
            if(i < text.length()) {
                result += ' ';
            }
            wordStart = i + 1;
        }
    }
    return result;
}

int main() {
    string fileData, line;
    ifstream myFile("input.txt");
    
    if(myFile.is_open()) {
        while(getline(myFile, line)) {
            fileData += line;
        }
        myFile.close();
    } else {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }
    
    cout << "Original: " << fileData << endl;
    
   
    int vowels = 0;
    for(int i = 0; i < fileData.length(); i++) {
        char ch = tolower(fileData[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    cout << "\nVowels: " << vowels << endl;
    
    int words = 0;
    bool inWord = false;
    for(int i = 0; i < fileData.length(); i++) {
        if(fileData[i] != ' ') {
            if(!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    cout << "Words: " << words << endl;
    
   
    cout << "\nReversed: " << Reverse(fileData) << endl;
    
    cout << "\nSecond letter capitalized: " << capitalizeSecondLetter(fileData) << endl;
    
    return 0;
}
