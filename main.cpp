#include <iostream>
#include <string>
using namespace std;
// The definition of recursion is the repeated application of a recursive procedure or definition.
//Recursive Function - contains a call to itself 
void TowerofH(int n, string from_tower, string to_tower, string aux_tower)
{
  if(n == 1)
  {
    cout << "Move disk 1 from rod "<< from_tower << " to rod " << to_tower << endl;
    return;
  }
  TowerofH(n -1, from_tower, aux_tower, to_tower);
  cout << "Move disk " << n << " from rod " << from_tower << " to rod " << to_tower << endl;
  TowerofH(n-1, aux_tower, to_tower, from_tower);
}


int main() {
  
  int n = 3; 
  TowerofH(n, "Start", "End", "Mid");
  return 0; 
}