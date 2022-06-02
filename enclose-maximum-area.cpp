/* enclose-maximum-area.cpp : This file contains the solution for the problem of finding
   the dimensions and  maximum rectangular area (with or without subdividions) that can be enclosed
   given the length of available fence (string......) and the number of subdivisions as inputs.
   The algebric idea behind is to transform the area formula (A=LW) into a quadratic equation
   using the values of the user inputs, and find out the maximum value of its parabola (the veertex) which can
   be used to find out the maximum enclosed area and dimensions. The following diagram shows hypothetical example
   of some area divided into two subdivisions.

            Length         
   -------------------------
   |          |            | 
   |          |            |
   | W        | W          | Width
   |          |            |
   |          |            |
   |          |            |
   -------------------------
              L   
   
*/


#include <iostream>

using namespace std;

int main()
{
    float availableFenceLength, numOfSubdivisions, subFencLength, subNumOfSubdivisions;
    float width, length, area;

    cout << "What the length of the available fence do you have: ";
    cin >> availableFenceLength;

    cout << "Enter the number of subdivisions: ";
    cin >> numOfSubdivisions;

    subFencLength = availableFenceLength / 2;
    subNumOfSubdivisions = (numOfSubdivisions + 1) / 2;

    width = (-1 * subFencLength) / (2 * (-1 * subNumOfSubdivisions));

    length = subFencLength - (subNumOfSubdivisions * width);

    area = width * length;

    cout << "Maximum area = " << area << "\n";
    cout << "Width = " << width << "\n";
    cout << "Length = " << length << endl;

}
