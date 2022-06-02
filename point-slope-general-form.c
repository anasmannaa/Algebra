/*
# point-slope-general-form-linear-equation
This little C program was written to solve the problem of how to get the linear equation of a line if you know the coordinates of on point on that line as well as its slope!
The programs starts by explaining how to inser the point coordinates as well as the slope.
all numbers should be inserted as integers, and as some points might be fractions, tha program will accept all numbers as fraction! How is this happens?! Ok it is simple as a piece of cake!
lets suppose that you know a point on a line representing a linear equation and that point is (2, 1/2) with a slope for the line of 2/3. Well, the program will ask you to insert every number in two steps, numerator step and denomenator step, 
so in this case "2" will be inserted as numerator "2" and denomenator "1", and y will be inserted in two steps as numerator = 1, and denominator = 2 ... and so on. The program will perform its calculations and print the
equation of the line on screen.
*/

#include <stdio.h>

int main() {
  int xNumerator, yNumerator, slopeNumerator = 0;
  int xDenominator, yDenominator, slopeDenominator = 0;
  int aConst, bConst, cConst = 0;
  
printf("Insert all constants as Fractions! For non fraction constants, make it a fraction with denominator equals to 1. For example if the point on the line is (2, 1/2) with slope of 1 you can insert your inputs in this way:\n Insert x coodrinate numerator: 2\n Insert x coodrinate denominator: 1\n Insert y coodrinate numerator: 1\n Insert y coodrinate denominator: 2\n Insert slope numerator: 1\n Insert slope denominator: 1");


  printf("Insert x coodrinate numerator: ");
  scanf("%d", &xNumerator);
  printf("Insert x coodrinate denominator: ");
  scanf("%d", &xDenominator);
  printf("Insert y coodrinate numerator: ");
  scanf("%d", &yNumerator);
  printf("Insert y coodrinate denominator: ");
  scanf("%d", &yDenominator);
  printf("Insert slope numerator: ");
  scanf("%d", &slopeNumerator);
  printf("Insert slope denominator: ");
  scanf("%d", &slopeDenominator);

  if (xDenominator != 1) {
    xNumerator *= xDenominator;
    yNumerator *= xDenominator;
    slopeNumerator *= xDenominator;
  }

  if (yDenominator != 1) {
    xNumerator *= yDenominator;
    yNumerator *= yDenominator;
    slopeNumerator *= yDenominator;
  }

  if (slopeDenominator != 1) {
    xNumerator *= slopeDenominator;
    yNumerator *= slopeDenominator;
    slopeNumerator *= slopeDenominator;
  }

  if (slopeNumerator == 0) {
    if (yDenominator != 1) {
      printf("Line Equation in general form: y = %d/%d", yNumerator/yDenominator);
    } else {
      printf("Line Equation in general form: y = %d", cConst);
    }    
  
  } else {
    aConst = -1 * slopeNumerator;
    bConst = 1;
    cConst = slopeNumerator * (-1 * xNumerator) + yNumerator;

    if (aConst < 1) {
      aConst = -1 * aConst;
      bConst = -1 * bConst;
      cConst = -1 * cConst; 
    }

    printf("(%d) x + (%d) y = %d", aConst, bConst, cConst);
  }
    
    return 0;
}
