#include <iostream>
using namespace std;
int main()
{
    int areaOfLawn, numberOfApplicants, numberOfPlantingTrees;
    double costToMowing, costToFertilizing, costToPlantingTrees, billingAmount;

    areaOfLawn = 10000;
    numberOfApplicants = 2;
    numberOfPlantingTrees = 5;

    costToMowing = (35.00/5000) * areaOfLawn;
    costToFertilizing = 30.00 * numberOfApplicants;
    costToPlantingTrees = 50.00 * numberOfPlantingTrees;

    billingAmount = costToMowing + costToFertilizing + costToPlantingTrees;
    cout << "Billing Amount: $" << billingAmount;

    return 0;
}