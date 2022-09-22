/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1B
This program makes a maze and takes a list of directions and prints if it was properly traversed or not.
*/

#include <iostream>
#include<string>

int main() {

  int maze[6][6] = {
   1,0,1,1,1,1,
   1,0,0,0,1,1,
   1,0,1,0,0,1,
   1,0,1,0,1,1,
   1,0,0,0,0,0,
   1,1,1,1,1,1 };
  char s;
// std::string s;
  int r = 0;
  int c = 1;
 

    
  while(std::cin >> s) {
    if (s =='R' && maze[r][c+1] == 0){
    c++;
      }
    if (s =='L' && maze[r][c-1] == 0){
    c--;
      }
    if (s =='D' && maze[r+1][c] == 0){
    r++;
      }
    if (s =='U' && maze[r-1][c] == 0){
    r--;
      }

 
  
    }
  if (r == 4 && c == 5){
    std::cout << "You got out of the maze \n" ;
  }
  else {
    std::cout << "You got stuck in the maze \n" ;
  }
  }
