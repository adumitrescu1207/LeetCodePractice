/*
There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters 
of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.
*/
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string textCopy = text;
        char* ctext = textCopy.data();
        char* word = strtok(ctext, " ");
        int count = 0;
        while (word != NULL) {
            bool ok = true;
            for (int i = 0; i < brokenLetters.size(); i++) {
                if (strchr(word, brokenLetters[i]) != NULL) {
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
            word = strtok(NULL, " ");
        }
        return count;
    }
};
