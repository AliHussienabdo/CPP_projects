// Fig. 15.21: fig15_21.cpp
// Standard Library priority_queue adapter class.
#include <iostream>
#include <queue> // priority_queue adapter definition
using namespace std;

int main() {
   priority_queue<string> priorities; // create priority_queue

   // push elements onto priorities
   priorities.push("zbbb");         
   priorities.push("zaaa");         
   priorities.push("zccc");         

   cout << "Popping from priorities: \n";

   // pop element from priority_queue
   while (!priorities.empty()) {
      cout << priorities.top() <<endl; // view top element
      priorities.pop(); // remove top element             
   } 

   cout << endl;
} 
