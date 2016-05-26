#include <iostream>
#include <stack>
#include <assert.h>

using namespace std;


//function prototypes

long int fibfunc (int n, stack<long int> s);


int main()

{


   //declare stack that will store results
   stack<long int> storage;
   //declaration of number variable
   int n=0;

   std::cout << "What fibonacci number do you want to know? : ";

   //get user input
   cin >> n;

   //display the result
   cout << fibfunc(n,storage) <<endl;

   //end program
   return 0;
}




long int fibfunc (int n , stack<long int> storage)

   {
   //fibr (46) is he largest value that fits in an long

   assert ((n>0) && (n <47));
   if (n==1 || n == 2)
      {
	 return 1; //base cases
      }

      //push fib 1 onto stack
      storage.push(1);
      //push fib 2 onto stack
      storage.push(1);
      //temp variable declarations
      long int temp1, temp2, result;

      //for loop that runs until it hits the number the user wants the fibonacci result of
      for (int i=2; i < n; i++)
      {
	 //access first element in stack, store it in temp
	 temp1 = storage.top();
	 //pop element from stack
	 storage.pop();
	 //access second element in the stack, store in a temp
	 temp2 = storage.top();
	 //pop element from stack
	 storage.pop();
	 //store temp1 + temp 2 in temporary variable result
	 result = temp1 + temp2;
	 //push second element back on
	 storage.push(temp2);
	 //push first element back on
	 storage.push(temp1);
	 //push the result onto the stack
	 storage.push(result);
      }

      //return the result to the user
      return storage.top();




}
