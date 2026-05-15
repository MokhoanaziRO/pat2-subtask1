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
    // Output each letter with its Morse code
    for (char c : input) {
        if (morseCode.find(c) != morseCode.end()) {
            if (c != ' ') {
                cout << c << ": " << morseCode[c] << endl;
            } else {
                cout << endl; // Blank line for space between words
            }
        } else {
            cout << c << ": (unknown)" << endl; // For unsupported characters
        }
    }

    // Output full Morse code message with spaces between letters
    cout << "\nFull Morse Code Message:\n";
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (morseCode.find(c) != morseCode.end()) {
            cout << morseCode[c];
            if (c != ' ') {
                cout << "   "; // 3 spaces between letters
            } else {
                cout << "       "; // 7 spaces between words
            }
        }
    }
    cout << endl;
return 0;
}


