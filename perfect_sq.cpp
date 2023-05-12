# include <iostream>


// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	int num;
	float root;
	
	// asking user for the number
	std::cout << "Enter your number: ";
	std::cin >> num;
	root = sqrt(num); // storing the root of the number
	
	// checking if the root has a floating part in it
	if(root - (int)root == 0) std::cout << "Perfect square.";
	else std::cout << "Not a perfect square.";
	
	return 0;
}
