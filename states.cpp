#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "There is 50 states in the united states of america, and here's a list of them alphabetically:" "\n";
  string states[50] = {"Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi", "Missouri", "Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico", "New York", "North Carolina", "North Dakota", "Ohio", "Oklahoma", "Oregon", "Pennsylvania", "Rhode Island", "South Carolina", "South Dakota", "Tennessee", "Texas", "Utah", "Vermont", "Virginia", "Washington", "West Virginia", "Wisconsin", "Wyoming"};
  for (int i = 0; i < 50; i++) {
    cout << i << " = " << states[i] << "\n";
  }
  cout << "In which of these 50 states do you live, enter the corresponding number : ";
  int choice;
  cin >> choice;
  if (choice >= 0 && choice < 49) {
    cout << "You live in " << states[choice] << ".\n";
  } else {
    cout <<  "Invalid number.\n";
  }
  return 0;
}
