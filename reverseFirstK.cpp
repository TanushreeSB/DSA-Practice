#include <queue>

class Solution {
  public:
    std::queue<int> reverseFirstK(std::queue<int> q, int k) {
        if (k <= 0 || k > q.size()) return q;

        int n = q.size();

        std::deque<int> temp;
        for (int i = 0; i < k; ++i) {
            temp.push_front(q.front());
            q.pop();
        }

        for (int val : temp) {
            q.push(val);
        }

        for (int i = 0; i < n - k; ++i) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
