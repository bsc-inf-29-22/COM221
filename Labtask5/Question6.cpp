#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
using namespace std;

string reverseWords(string str) {
    istringstream iss(str);
    vector<string> words;
    string word;
    
    // Split the string into words and store them in a vector
    while (iss >> word) {
        words.insert(words.begin(), word); // Insert each word at the beginning of the vector
    }

    // Join the words back into a string
    string reversed;
    for (const auto& w : words) {
        reversed += w + " ";
    }

    // Remove the trailing space
    if (!reversed.empty()) {
        reversed.pop_back();
    }

    return reversed;
}

// function to capitalise
void capitalizeSecondLetter(string& word) {
    if (word.length() >= 2) {
        word[1] = toupper(word[1]);
    }
}

int main() {

/*open file*/
    ifstream input("textfile.txt");

    /* Read and print the contents line by line*/
    //string fileData;
    // Read file contents into fileData
    string fileData;
    string line;
    while (getline(input, line)) {
        fileData += line + " "; // Concatenate lines with a space separator
    }

  int wordCount = 0;
    stringstream ss(fileData);
    string word;
    while (ss >> word) {
        wordCount++;
    }

     // Close the file
    input.close();
   
    //cout << fileData << endl;
    
    int vowelCount = 0;
        for (char c : fileData) {
           // Convert to lowercase
            c = tolower(c); 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount++;
            }
        }

    // Output the number of vowels
cout <<"\nThe number of vowels is " << vowelCount << endl;

    // Output the number of words
cout <<"The number of words is " << wordCount<< endl;
   // reverse words in the string
string reversed = reverseWords(fileData);
cout << "Reversed: " << reversed << endl;

    // Open the file
ifstream inputFile("textfile.txt");

    if (!inputFile.is_open()) {
        cerr << "Error: File could not be opened." << endl;
        return 1;
    }

    // Read the file
string statement;
    while (getline(inputFile, statement)) {
        // Split the statement into words
vector<string> words;
        istringstream iss(statement);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        // Capitalize the second letter of each word
for (auto& word : words) {
            capitalizeSecondLetter(word);
        }

        // Join the words back into a statement
string modifiedStatement = "";
        for (size_t i = 0; i < words.size(); ++i) {
            modifiedStatement += words[i];
            if (i < words.size() - 1) {
                modifiedStatement += " ";
            }
        }

        // Output the modified statement
cout <<"Capitalize Second Letter:"<< modifiedStatement <<"\n" <<endl;
    }


 inputFile.close();

return 0;
}

