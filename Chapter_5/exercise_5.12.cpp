#include <iostream>
#include <string>

using namespace std;

int main() 
{
    cout << "Enter a combination of \"ff\", \"fl\", and \"fi\": ";

    // Input
    string word;
    getline(cin, word);

    // Count vowel instances
    int ff_count = 0;
    int fl_count = 0;
    int fi_count = 0; 

    // Count all vowel instances
    for (int i = 0; i < word.size(); ++i)
    {
        if (word[i] == 'f')
        {
            // Check next character after 'f'
            switch (word[i + 1])
            {
                case 'f':
                    ++ff_count;
                    break;
                case 'l':
                    ++fl_count;
                    break;
                case 'i':
                    ++fi_count;
                    break;
            }
        }
    }

    cout << "ff: " << ff_count << endl;
    cout << "fl: " << fl_count << endl;
    cout << "fi: " << fi_count << endl;

    return 0;
}