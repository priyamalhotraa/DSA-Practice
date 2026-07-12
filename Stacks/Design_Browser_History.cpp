// Problem: Design Browser History
// Topic: Stack, Array

/*
APPROACH:
Use a dynamic array (vector) to store all
visited URLs and an index to track the
current page.

- Store the homepage as the first entry.
- Maintain a pointer (curr) to the current
  page.
- visit(url):
    - Remove all forward history by resizing
      the vector.
    - Add the new URL.
    - Move the current pointer to the new page.
- back(steps):
    - Move the pointer backward without
      going below index 0.
- forward(steps):
    - Move the pointer forward without
      exceeding the last page.

Why does this work?
The vector stores the browsing history in
order, while the current pointer always
represents the page being viewed. Whenever
a new page is visited, all forward history
is discarded, matching the behavior of a
real browser.
*/

class BrowserHistory {
public:
    vector<string> history;
    int curr;

    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr = 0;
    }

    void visit(string url) {

        // Remove forward history
        history.resize(curr + 1);

        // Add the new page
        history.push_back(url);
        curr++;
    }

    string back(int steps) {

        // Move backward safely
        curr = max(0, curr - steps);
        return history[curr];
    }

    string forward(int steps) {

        // Move forward safely
        curr = min((int)history.size() - 1, curr + steps);
        return history[curr];
    }
};
