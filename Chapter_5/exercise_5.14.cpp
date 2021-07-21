#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    // Take user input of random words
    string user_inputs;
    cout << "Enter random words: " << endl;
    

    // Read inputs then store to vector
    vector<string> words;
    while (cin >> user_inputs)
    {
        words.push_back(user_inputs);
    }

    // Iterate vector and count identical words
    vector<int> word_count;
    vector<string> existing_words;
    for (int i = 0; i < words.size(); ++i)
    {
        // FIX: Finding an element in a vector (Python < in >)
        int* ptr = find(words.begin(), words.end(), words[i]);
        // ***********************************************
        if (ptr == words[i] )
        {
            int count = 0;
            for (int j = 0; j < words.size(); ++j)
            {
                // Count duplicate words then store to vector
                if (words[i] == words[j])
                {
                    ++count;
                }
            }
            word_count.push_back(count);
            // Reset count
            count = 0;
        }
        // Add word to existing_word vector
        existing_words.push_back(words[i]);
    }

    for (auto word : existing_words)
    {
        cout << word << endl;
    }

    for (auto count : word_count)
    {
        cout << count << endl;
    }

    return 0;
}
