# include <iostream>


int main(int argc, char const* argv[]){
	// variable declaration
	int people, weight, totalWeight = 0;
	
	// welcome text and people count taken
	std::cout << "Hello travellers! It seems you need to use my boat.\nHow many of you are here?: ";
	std::cin >> people;
	
	// if-else-if construct checks if people count is a positive integer and is
	// lesser than 7
	if(people < 0){
		std::cout << "I might be unschooled, but I am pretty sure people cannot be negative.\n";
		return 0;	
	}
	else if(people == 0){
		std::cout << "If none of you want to go along, then I just go by myself....\n";
		return 0;
	}
	else if(people > 6){
		std::cout << "Sorry lads! My boat is too small for this much of you.\n";
		return 0;	
	}
	
	// iterating through to get the weights of all the individuals
	for(int i = 1; i <= people; i++){
		// asking for weight in output stream
		std::cout << "Enter the weight for lad no. " << i << " (in kg): ";
		std::cin >> weight;
		
		// checking if weight is zero or negative
		if(weight <= 0){
			std::cout << "I think this weight doesnot work out.\n";
			i--;
			continue;	
		}
		
		totalWeight += weight;
	}
	
	// checking if the total weight is too much for the boat to take
	if(totalWeight > 500){
		std::cout << "Sorry fellas! My boat cannot take this much weight.\n";
		return 0;	
	}
	
	// runs when everything has went allright in the program
	std::cout << "Alright lads! I am ready to set sail when you are.\n";
	
	return 0;	
}
