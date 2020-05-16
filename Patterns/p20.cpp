// C++ implementation to print the pattern 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function definition 
void pattern(int min_stars, int p_height) 
{ 
    int p_space; 
    p_space = p_height - 1; 
    int i, j, k, n, x; 
    x = 1; 
  
    // for loop for height of pyramid 
    for (i = 0; i < p_height; i++) { 
  
        // for loop for spaces 
        for (j = p_space; j > i; j--) { 
            cout << " "; 
        } 
  
        // for loop for printing 
        // left pyramid 
        for (k = 0; k < min_stars; k++) 
            cout << "*"; 
  
        // for loop for spaces in middle 
        for (n = (p_height + p_height - 2); 
             n >= x; n--) 
            cout << " "; 
  
        // for loop for printing 
        // right pyramid 
        for (k = 0; k < min_stars; k++) 
            cout << "*"; 
  
        min_stars = min_stars + 2; 
        x = x + 2; 
        cout << endl; 
    } 
} 
  
// Driver code 
int main() 
{ 
    /* change value to set minimun  
    number of stars in pyramid */
    int min_stars = 1; 
  
    /* change value to increase or 
    decrease size of pyramid */
    int p_height = 5; 
  
    // function calling 
    pattern(min_stars, p_height); 
    return 0; 
} 
