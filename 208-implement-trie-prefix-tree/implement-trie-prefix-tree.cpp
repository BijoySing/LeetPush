class Trie {
public:
    Trie* child[26];
    bool eow;

    Trie() {

        eow = false;

        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
    }

    void insert(string word) {
        Trie* node = this;
        for (auto c : word) {
            int index = c - 'a';
            if (node->child[index] == nullptr) {
                node->child[index] = new Trie();
            }
            node = node->child[index];
        }
        node->eow = true;
    }

    bool search(string word) {
        Trie* node = this;
        for (auto c : word) {
            int index = c - 'a';
            if (node->child[index] == nullptr) {
                return false;
            }
            node = node->child[index];
        }
        return node->eow;
    }

    bool startsWith(string prefix) {
        Trie* node = this;
        for (auto c : prefix) {
            int index = c - 'a';
            if (node->child[index] == nullptr) {
                return false;
            }
            node = node->child[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */