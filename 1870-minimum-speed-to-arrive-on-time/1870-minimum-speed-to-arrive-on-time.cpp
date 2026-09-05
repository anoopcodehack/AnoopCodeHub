class Solution {
public:
    bool canArrive(vector<int>& dist, double hour, int speed) {
        double time = 0;

        for (int i = 0; i < dist.size() - 1; i++) {
            time += ceil((double)dist[i] / speed);

            if (time > hour)
                return false;
        }

      
        time += (double)dist.back() / speed;

        return time <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();

        if (hour <= n - 1)
            return -1;

        int low = 1;
        int high = 10000000;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canArrive(dist, hour, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};