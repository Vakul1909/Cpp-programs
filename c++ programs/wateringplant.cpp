#include <vector>
#include <iostream>
using namespace std;
int minStepsToWaterPlants(vector<int>& plants, int capacityA, int capacityB) {
    int stepsA = 0, stepsB = 0;
    int canA = capacityA, canB = capacityB;
    int i = 0, j = plants.size() - 1;
    while (i <= j) {
        if (i == j) {
            // If both meet at the same plant
            if (canA + canB >= plants[i]) {
                // They can together water the plant without refilling
                stepsA++; // Incrementing one of the steps as they meet
                break;
            }
        }
        // Person A waters the plant from the left
        if (canA < plants[i]) {
            stepsA++;          // Increment steps for refilling
            canA = capacityA;  // Refill the can
        }
        canA -= plants[i];
        i++;
        // Person B waters the plant from the right
        if (canB < plants[j]) { 
            stepsB++;          // Increment steps for refilling
            canB = capacityB;  // Refill the can
        }
        canB -= plants[j];
        j--;
    }
    return stepsA + stepsB;
}
int main() {
    vector<int> plants = {5,6,3,8,2,9};
    int capacityA = 10, capacityB = 8;
    cout << "Minimum steps to water all plants: " << minStepsToWaterPlants(plants, capacityA,capacityB)<<endl;
    return 0;
}