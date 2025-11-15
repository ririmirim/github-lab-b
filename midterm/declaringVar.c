//(BATHAN, JOHN EARL EPHRAIM S. DIT 1-2)
#include <stdio.h>
#include <string.h>

int main() {

// DECLARING VARIABLES OF DIFFERENT DATA TYPES AND ASSIGNING VALUES
  int level = 93;
  const int minLevel = 1;
  const int maxLevel = 100;
  char status = 'A';
  char announcement[] = "All roads lead to Cubao!";
  float pi = 3.14;
  double rank = 18.29;

// DISPLAYING THE VALUES OF THE VARIABLES
  printf("---------------------------------------------------\n");
  printf("Variables of different data types and their values: \n");
  printf("---------------------------------------------------\n");
  printf("Level (int)                   : %d\n", level);
  printf("Minimum Level (const int)     : %d\n", minLevel);
  printf("Maximum Level (const int)     : %d\n", maxLevel);
  printf("Status (char)                 : %c\n", status);
  printf("Announcement (string)         : %s\n", announcement);
  printf("Pi (float)                    : %f\n", pi);
  printf("Pi (float decimal precision)  : %.2f\n", pi);  // display float with 2 decimal (decimal precision)
  printf("Rank (double)                 : %lf\n", rank);
  return 0;
}