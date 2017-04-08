//
//  main.c
//  Turkey
//
//  Created by Josiah Mory on 4/7/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  // Declare the variable called 'weight' of type float
  float weight;
  
  // Store a number in that variable
  weight = 14.2;
  
  // Log it to the user
  printf("The turkey weighs %f.\n", weight);
  
  // Decalare another variable of type float
  float cookingTime;
  
  // Calculate the cooking time and store it in the variable
  cookingTime = 15.0 + 15.0 * weight;
  
  // Log that to the user
  printf("Cook it for %f minutes.\n", cookingTime);
  
  // End the function and indicate sucess
  return 0;
  
}
