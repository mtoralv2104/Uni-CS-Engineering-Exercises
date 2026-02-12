// Marcos Torres 08-12-25
// 19maxDistance.cpp

#include <iostream>
#include <string>

using namespace std;

const int MAX_DIFF_WORDS = 100;

struct WordData {
    string word;
    int lastPos;
    int maxDist;
    bool repeated;
};

int main() {
    WordData words[MAX_DIFF_WORDS];
    int numWords = 0;
    
    string inputWord;
    int currentPos = 0;

    cout << "Enter text (FIN to finish):" << endl;
    cin >> inputWord;

    while (inputWord != "FIN") {
        int foundIndex = -1;
        bool found = false;
        
        for (int i = 0; i < numWords and not found; i++) {
            if (words[i].word == inputWord) {
                foundIndex = i;
                found = true;
            }
        }

        if (found) {
            int dist = currentPos - words[foundIndex].lastPos - 1;
            if (dist > words[foundIndex].maxDist) {
                words[foundIndex].maxDist = dist;
            }
            words[foundIndex].lastPos = currentPos;
            words[foundIndex].repeated = true;
        } else {
            if (numWords < MAX_DIFF_WORDS) {
                words[numWords].word = inputWord;
                words[numWords].lastPos = currentPos;
                words[numWords].maxDist = 0;
                words[numWords].repeated = false;
                numWords++;
            }
        }

        currentPos++;
        cin >> inputWord;
    }

    cout << "The maximum distance between repeated words is:" << endl;
    for (int i = 0; i < numWords; i++) {
        if (words[i].repeated) {
            cout << "Distance between " << words[i].word << ": " << words[i].maxDist << endl;
        }
    }

    return 0;
}