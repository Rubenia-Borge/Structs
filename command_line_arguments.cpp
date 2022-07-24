#include <iostream>
#include <string>
using namespace std;

/* Usage: program username userage */
int main(int argc, char* argv[]) {
   string nameStr;  // User name
   string ageStr;   // User age
   
   // Get inputs from command line
   nameStr = argv[1];
   ageStr  = argv[2];
   
   // Output result
   cout << "Hello " << nameStr << ". ";
   cout << ageStr << " is a great age." << endl;
   
   return 0;
}
