 
#include <string>
#include <cstring>
using namespace std;

class WordDictionary {
public:
    // Each node has 26 pointers, one for each letter a-z.
    WordDictionary* arr[26];

    // True if this node marks the end of a complete word.
    bool isLeaf = false;

    // Constructor: initialize all pointers to nullptr.
    WordDictionary() {
        memset(arr, 0, sizeof(arr));
    }

    // Add a word to the Trie.
    void addWord(string word) {
        WordDictionary* cur = this;

        for (int i = 0; i < (int)word.size(); i++) {
            int ch = word[i] - 'a';

            // If this character's node doesn't exist, create it.
            if (!cur->arr[ch]) {
                cur->arr[ch] = new WordDictionary();
            }

            // Move to the next node.
            cur = cur->arr[ch];
        }

        // Mark the last node as the end of a complete word.
        cur->isLeaf = true;
    }

    // Search for a word. '.' matches any single letter.
    bool search(string word, int idx = 0,
                WordDictionary* cur = nullptr) {

        // On the first call, start at the root.
        if (!cur) {
            cur = this;
        }

        // If we consumed every character, check whether
        // the current node ends a complete word.
        if (idx == (int)word.size()) {
            return cur->isLeaf;
        }

        // If the current character is '.', try every
        // existing child node.
        if (word[idx] == '.') {
            for (int i = 0; i < 26; i++) {
                if (cur->arr[i] &&
                    cur->arr[i]->search(
                        word, idx + 1, cur->arr[i])) {
                    return true;
                }
            }

            // No child produced a matching word.
            return false;
        }

        // For a normal letter, calculate its array index.
        int ch = word[idx] - 'a';

        // If the required child doesn't exist, the word
        // cannot match.
        if (!cur->arr[ch]) {
            return false;
        }

        // Continue searching from the matching child.
        return cur->arr[ch]->search(
            word, idx + 1, cur->arr[ch]);
    }
};
