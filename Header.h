#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>

using namespace std;


// Dictionary class
class Dictionary
{
private:
    // Node structure for Trie
    class Trinode
    {
    public:
        Trinode* node[26];  // Array to represent links to child nodes for each letter
        bool isEnd;         // Flag to indicate the end of a word
        string meaning;     // Meaning of the word

        // Constructor to initialize the node
        Trinode() : isEnd(false) {
            for (int i = 0; i < 26; ++i) {
                node[i] = nullptr;
            }
        }
    };
public:
    Trinode* root;

    // Constructor
    Dictionary() {
        root = new Trinode();
        load();
    }

    // Destructor
    ~Dictionary() {
        DeleteTrie(root);
    }

    // Helper function to search for a word in the Trie
    Trinode* SearchWordHelper(Trinode* temp, const string& word, int level, int length)
    {
        if (temp) {
            if (level == length)
            {
                if (temp->isEnd)
                {
                    return temp; // Return the node if the word is found
                }
                return nullptr;
            }

            int index = word[level] - 'a';
            return SearchWordHelper(temp->node[index], word, level + 1, length);
        }

        return nullptr;
    }

    static Dictionary* obj;

public:
    static Dictionary* getobj()
    {
        if (!obj)
        {
            obj = new Dictionary();
        }
        return obj;
    }


    // Insert a word into the Trie
    void InsertInTrie(const string& word, const string& meaning)  const
    {
        Trinode* temp = root;

        for (int i = 0; i < word.length(); ++i)
        {
            char ch = tolower(word[i]);
            int index = ch - 'a';
            if (!temp->node[index])
            {
                temp->node[index] = new Trinode();
            }
            temp = temp->node[index];
        }

        temp->isEnd = true;
        temp->meaning = meaning;
    }

    // Add a word to the Trie
    bool AddWord(const string& word, const string& meaning) const
    {
        InsertInTrie(word, meaning);
        return true;
    }

    // Search for a word in the Trie and display its meaning if found
    bool FindWord(Trinode* temp, const string& word)
    {
        if (word.length() == 0)
        {
            if (root->isEnd)
            {
                cout << "The meaning of this word is: " << root->meaning << endl;
                return true;
            }
        }

        int i = word[0] - 'a';
        Trinode* child;

        if (root->node[i] != NULL)
        {
            child = temp->node[i];
        }
        else
        {
            return false;
        }

        return FindWord(child, word.substr(1));
    }

    string FindWordOnly(Trinode* temp, const string& word)
    {
        if (word.length() == 0)
        {
            if (root->isEnd)
            {
                //cout << "The meaning of this word is: " << root->meaning << endl;
                return temp->meaning;
            }
        }

        int i = tolower(word[0]) - 'a';
        Trinode* child;

        if (temp->node[i] != NULL)
        {
            child = temp->node[i];
        }
        else
        {
            return "";
        }

        return FindWordOnly(child, word.substr(1));
    }

    // Search for a word in the Trie
    bool SearchWord(const string& word)
    {
        
        if (!FindWord(root, word))
        {
            cout << "Word not found." << endl;
        }
        
        return true;
    }

    string SearchWordOnly(const string& word)
    {
        
        
        return FindWordOnly(root, word);
    }


    // Delete a word from the Trie
    bool DeleteWord(const string& word)
    {
        if (root == nullptr)
        {
            return false;
        }

        int length = word.length();
        DeleteWordHelper(root, word, 0, length);
        return true;
    }

    // Helper function to delete a word from the Trie
    void DeleteWordHelper(Trinode*& temp, const string& word, int level, int length) {
        if (temp) {
            if (level == length) {
                temp->isEnd = false;
                temp->meaning = "";
            }
            else {
                int index = word[level] - 'a';
                DeleteWordHelper(temp->node[index], word, level + 1, length);
            }

            bool hasChildren = false;
            for (int i = 0; i < 26; ++i) {
                if (temp->node[i]) {
                    hasChildren = true;
                    break;
                }
            }

            if (!hasChildren && !temp->isEnd) {
                delete temp;
                temp = nullptr;
            }
        }
    }


    // Recursively delete the Trie
    void DeleteTrie(Trinode* temp)
    {
        if (!temp) {
            return;
        }

        for (int i = 0; i < 26; ++i) {
            DeleteTrie(temp->node[i]);
        }

        delete temp;
    }
    //header.h
    void FindTrie(Trinode* node, const string& currentWord, int& count, const string& prefix, vector<string>& suggestions) const {
        if (node == nullptr || count >= 100) {
            return;
        }

        if (node->isEnd) {
            suggestions[count++] = currentWord;
        }

        for (int i = 0; i < 26; ++i) {
            if (node->node[i] != nullptr) {
                char ch = 'a' + i;
                string newWord = currentWord + ch;
                FindTrie(node->node[i], newWord, count, prefix, suggestions);
            }
        }
    }

    vector<string> GetSuggestions(const string& prefix) const {
        vector<string> suggestions(100); // Assuming a maximum of 100 suggestions, adjust as needed
        int count = 0;

        Trinode* node = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (node->node[index]) {
                node = node->node[index];
            }
            else {
                // Return an empty vector if the prefix doesn't exist in the trie
                return vector<string>(); // Empty vector
            }
        }

        // Call the FindTrie function to populate suggestions
        FindTrie(node, prefix, count, prefix, suggestions);

        suggestions.resize(count); // Resize to actual count

        return suggestions;
    }



    // Update the meaning of a word in the Trie or add it if not found
   //header.h
    bool UpdateWord(const string& word, const string& newMeaning) {
        if (!root) {
            cout << "Dictionary is empty." << endl;
            return false;
        }

        int length = word.length();
        Trinode* node = SearchWordHelper(root, word, 0, length);

        if (node) {
            // Word found, update its meaning
            node->meaning = newMeaning;
            cout << "Word updated successfully." << endl;
            return true;
        }
        else {
            cout << "Word not found." << endl;
            cout << "Do you want to add this word to the dictionary? (yes/no): ";

            // Use a string variable to get user input
            string userChoice;
            cin >> userChoice;

            // Get user input in a loop until a valid response is given
            while (true) {
                if (userChoice == "yes" || userChoice == "Yes" || userChoice == "YES") {
                    AddWord(word, newMeaning);
                    return true;
                }
                else if (userChoice == "no" || userChoice == "No" || userChoice == "NO") {
                    cout << "Word not added to the dictionary." << endl;
                    return false;
                }
                else {
                    cout << "Invalid response. Please enter 'yes' or 'no': ";
                    cin >> userChoice;
                }
            }
        }
    }




    void load() const
    {

        ifstream file;
        file.open("Dictionary.txt");
        if (!file) 
        {
            return;
        }

        // Read words and meanings from file and insert into Trie
        while (!file.eof()) {
            
            string word, meaning;
            file >> word >> meaning;
            AddWord(word, meaning);
        }

        file.close();
    }
};

Dictionary* Dictionary::obj = nullptr;

