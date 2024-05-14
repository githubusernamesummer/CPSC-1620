//Question 4: A room has one door, two windows, and a built - in bookshelf and it needs to be painted.
//Suppose that one gallon of paint can paint 120 square feet.
//Write a program that prompts the user to input the lengths and widths of the door, each window, the bookshelf; and the length, width, and height of the room (in feet). 
//The program outputs the amount of paint needed to paint the walls of the room. 

#include <iostream>
using namespace std;

int main ()
{
    //Declare variables to store dimensions.
    double roomLength, roomWidth, roomHeight;
    double window1Width, window1Height;
    double window2Width, window2Height;
    double bookshelfWidth, bookshelfHeight;
    double doorWidth, doorHeight;

    //Constants 
    const double coveragePerGallon = 120.0; //One gallon covers 120 square feet. 

    cout << "Enter the room dimensions (length, width, height): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    cout << "Enter the door dimensions (width, height): ";
    cin >> doorWidth >> doorHeight;

    cout << "Enter the first window dimensions (width, height): ";
    cin >> window1Width >> window1Height;

    cout << "Enter the second window dimensions (width, height): ";
    cin >> window2Width >> window2Height;

    cout << "Enter the bookshelf dimensions (width, height): ";
    cin >> bookshelfWidth >> bookshelfHeight;

    //Calculate the total wall area to be painted.

    double totalWallArea = 2 * roomHeight * (roomLength + roomWidth);

    //Calculate the areas not to be painted. 

    double doorArea = doorWidth * doorHeight;
    double window1Area = window1Width * window1Height;
    double window2Area = window2Width * window2Height;
    double bookshelfArea = bookshelfWidth * bookshelfHeight; 

    //Total non - paintable area 
    double totalNonPaintableArea = doorArea + window1Area + window2Area + bookshelfArea;

    //Effective area to be painted
    double paintableArea = totalWallArea - totalNonPaintableArea;

    //Calculate the amount of paint needed
    double paintNeeded = paintableArea / coveragePerGallon; 

    //Output the amount of paint needed.
    cout << "You will need approximately " << paintNeeded << " gallons of paint." << endl;

    return 0;


}
