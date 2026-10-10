```cpp
// Problem: Group Anagrams
// Topic: Strings, Hashing

/* CH
APPROACH:
Group strings that are anagrams of each other.

Create a map to store strings with their sorted versions as keys.

For each string:
    Copy the string into s.
    Sort s to get a common key for anagrams.
    Add the original string to the group stored at that key.

Create an answer vector to store all groups.

For each entry in the map:
    Copy its group into a vector.
    Sort the group alphabetically.
    Add the group to the answer vector.

Sort the answer vector to maintain a consistent order.

Return the final answer.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto it : mp) {
            vector<string> group = it.second;
            sort(group.begin(), group.end());
            ans.push_back(group);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
```
