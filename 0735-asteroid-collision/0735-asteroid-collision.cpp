class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        for (int x : asteroids) {
            bool alive = true;

            while (alive && !ans.empty() && ans.back() > 0 && x < 0) {
                if (ans.back() < -x) {
                    ans.pop_back();
                }
                else if (ans.back() == -x) {
                    ans.pop_back();
                    alive = false;
                }
                else {
                    alive = false;
                }
            }

            if (alive) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};