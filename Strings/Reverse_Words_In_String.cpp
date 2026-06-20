// Problem: Reverse Words in a String
// Topic: Strings

/*
APPROACH:
Reverse the entire string first.
This places the words in the correct final order,
but each individual word becomes reversed.

Traverse the reversed string and build one word at a time.

For every word found:
Reverse the word again to restore its original form.

Ignore empty words created by multiple spaces.

Append each valid word to the answer string.

A space is added before every word while building the answer,
so return the answer without the first extra space.
*/

class Solution {
public:
string reverseWords(string s) {
string ans = "";
int n = s.size();

    reverse(s.begin(), s.end());

    for(int i = 0; i < n; i++) {
        string word = "";

        while(i < n && s[i] != ' ') {
            word = word + s[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if(word.size() > 0) {
            ans = ans + " " + word;
        }
    }
    return ans.substr(1);
}
};
