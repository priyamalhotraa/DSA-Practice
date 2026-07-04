// Problem: Text Justification
// Topic: Strings, Greedy

/*
APPROACH:
Process the words line by line.

For each line:
    Take as many words as possible without
    exceeding maxWidth.

Count the total letters in the current line
to determine how many spaces are needed.

If it is the last line or the line contains
only one word:
    - Left justify the text.
    - Add a single space between words.
    - Fill the remaining spaces at the end.

Otherwise:
    - Distribute spaces as evenly as possible
      between all gaps.
    - If extra spaces remain, place them in
      the leftmost gaps.

Store each justified line in the answer
and continue with the next set of words.
*/

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n) {

            int j = i;
            int letters = 0;
            // Take as many words as possible
            while (j < n &&
                   letters + words[j].length() + (j - i) <= maxWidth) {

                letters += words[j].length();
                j++;
            }
            string line;
            int gaps = j - i - 1;

            // Last line or single word
            if (j == n || gaps == 0) {
                for (int k = i; k < j; k++) {
                    line += words[k];

                    if (k != j - 1)
                        line += " ";
                }
                // Add remaining spaces at the end
                while (line.length() < maxWidth)
                    line += " ";
            }
            // Full justification
            else {

                int totalSpaces = maxWidth - letters;

                int eachGap = totalSpaces / gaps;
                int extra = totalSpaces % gaps;

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k != j - 1) {

                        // Equal spaces for every gap
                        for (int s = 0; s < eachGap; s++)
                            line += " ";

                        // Extra spaces go to leftmost gaps
                        if (extra > 0) {
                            line += " ";
                            extra--;
                        }
                    }
                }
            }
            ans.push_back(line);
            i = j;
        }
        return ans;
    }
};
