#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

// Morse code mapping for letters A-Z
map<char, string> morseCode = {
    {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},  {'E', "."},
    {'F', "..-."}, {'G', "--."},  {'H', "...."}, {'I', ".."},   {'J', ".---"},
    {'K', "-.-"},  {'L', ".-.."}, {'M', "--"},   {'N', "-."},   {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
    {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."},
    {' ', " "} // Space between words
}

    return 0;
}
int main() {
    string input;
    cout << "Enter a message in English (max 42 characters): ";
    getline(cin, input);

    // Convert input to uppercase
    for (char &c : input) {
        c = toupper(c);
    }

    cout << "\nMorse Code Translation:\n";

