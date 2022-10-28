class TrieNode
{
public:

    bool is_word;
    TrieNode *children[26];

    TrieNode()
    {
        is_word = false;

        for(int i = 0; i < 26; i++)
            children[i] = NULL;

    }

    bool isKeyPresent(char c)
    {
        return children[c - 'a'] != NULL;
    }

    void makeChildren(char c)
    {
        children[c - 'a'] = new TrieNode();
    }

    TrieNode* getChildren(char c)
    {
        return children[c - 'a'];
    }

    void markEnd()
    {
        is_word = true;
    }

};

class Trie
{
private:
    TrieNode* root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string& word)
    {
        TrieNode* node = root;

        for(int i = 0; i < word.length(); i++)
        {
            char c = word[i];

            if(!node->isKeyPresent(c))
                node->makeChildren(c);

            node = node->getChildren(c);

        }

        node->markEnd();

    }

    bool search(string& word)
    {
        TrieNode* node = root;

        for(int i = 0; i < word.length(); i++)
        {
            char c = word[i];

            if(!node->isKeyPresent(c))
                return 0;

            node = node->getChildren(c);

        }

        return node->is_word;
    }
};
