 
class PrefixTree {
public:
    PrefixTree* arr[26];
    bool isLeaf;

    PrefixTree() {
        for (int i = 0; i < 26; i++) {
            arr[i] = nullptr;
        }
        isLeaf = false;
    }

    void insert(string word) {
        PrefixTree* cur = this;

        for (int i = 0; i < word.size(); i++) {
            int ch = word[i] - 'a';

            if (cur->arr[ch] == nullptr) {
                cur->arr[ch] = new PrefixTree();
            }

            cur = cur->arr[ch];
        }

        cur->isLeaf = true;
    }

    bool search(string word) {
        PrefixTree* cur = this;

        for (int i = 0; i < word.size(); i++) {
            int ch = word[i] - 'a';

            if (cur->arr[ch] == nullptr) {
                return false;
            }

            cur = cur->arr[ch];
        }

        return cur->isLeaf;
    }

    bool startsWith(string prefix) {
        PrefixTree* cur = this;

        for (int i = 0; i < prefix.size(); i++) {
            int ch = prefix[i] - 'a';

            if (cur->arr[ch] == nullptr) {
                return false;
            }

            cur = cur->arr[ch];
        }

        return true;
    }
};
