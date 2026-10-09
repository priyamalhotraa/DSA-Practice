```cpp
// Problem: Garbage Collection Problem
// Topic: Arrays, Strings

/*
APPROACH: CH
Calculate the total time required to collect all garbage.

Maintain separate counters for metal (M), paper (P), and glass (G).
Also, track the last house containing each type of garbage.

Traverse all houses:
    Count each type of garbage.
    Update the last house index for that type.

Calculate the travel time for each truck:
    Add travel times from the first house to its last required house.

Calculate the total time:
    Add the total garbage pickup time.
    Add the travel time of all three trucks.

Return the total time.
*/

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickM = 0;
        int lastHouseM = 0;

        int pickP = 0;
        int lastHouseP = 0;

        int pickG = 0;
        int lastHouseG = 0;

        for(int i = 0; i < garbage.size(); i++) {
            string currHouseGarbage = garbage[i];

            for(int j = 0; j < currHouseGarbage.size(); j++) {
                char garbagetype = currHouseGarbage[j];

                if(garbagetype == 'M') {
                    pickM++;
                    lastHouseM = i;
                }
                else if(garbagetype == 'P') {
                    pickP++;
                    lastHouseP = i;
                }
                else if(garbagetype == 'G') {
                    pickG++;
                    lastHouseG = i;
                }
            }
        }

        int travelM = 0;
        int travelP = 0;
        int travelG = 0;

        for(int i = 0; i < lastHouseM; i++) {
            travelM = travelM + travel[i];
        }

        for(int i = 0; i < lastHouseP; i++) {
            travelP = travelP + travel[i];
        }

        for(int i = 0; i < lastHouseG; i++) {
            travelG = travelG + travel[i];
        }

        int totaltime = (pickM + pickP + pickG) + (travelM + travelP + travelG);

        return totaltime;
    }
};
```
