// Problem: Car Fleet
// Topic: Array, Sorting, Greedy

/*
APPROACH:

Each car needs a certain amount of time to reach the target.

time = (target - position) / speed

- Pair each car's position with its time to reach the target.
- Sort the cars based on their starting positions.
- Traverse the cars from the one closest to the target
  towards the farthest.
- Keep track of the latest arrival time (lastTime)
  of the fleet ahead.
    - If the current car takes more time than lastTime,
      it cannot catch the fleet ahead, so it forms a
      new fleet.
    - Otherwise, it catches up before the target and
      becomes part of the existing fleet.

Why does this work?
Starting from the car nearest the target guarantees that
we already know the arrival time of the fleet ahead.
A faster car behind can only merge into that fleet if it
reaches the target no later than the fleet ahead.
If it takes longer, it can never catch up and must form
its own fleet.
*/

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, double>> cars;

        // Store each car's position and time to reach target
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Sort cars by starting position
        sort(cars.begin(), cars.end());

        int fleets = 0;
        double lastTime = 0;

        // Traverse from the car closest to the target
        for (int i = cars.size() - 1; i >= 0; i--) {

            // Cannot catch the fleet ahead
            if (cars[i].second > lastTime) {
                fleets++;
                lastTime = cars[i].second;
            }
        }

        return fleets;
    }
};
