#include<iostream>
#include <string>
using namespace std;

main () 
{
	string sequence;							//Storing the sequence the user entered as a string  
	int startCodon; 							//Declaring an int as startCodon to store location of (ATG) 
	int stopCodon; 								//Declaring an int as stopCodon to store location of (TAG)
	string final;								//Declaring variable for final string of gene

	cout << "Please enter a DNA sequence: ";
	cin >> sequence; 							//Prompting user for a sequence and storing the answer 

	startCodon = sequence.find("ATG"); 
	stopCodon = sequence.find("TAG"); 					//Using the .find function to find (ATG) and (TAG) within the user entered sequence 

	if ((startCodon == -1)||(stopCodon == -1))
	{
		cout << "This sequence does not contain a gene." << endl; 
	}
	
	else if (startCodon > stopCodon) 					//Using an if else statement to determine if the sequence actually contains a gene. 
	{
		cout << "This sequence does not contain a gene." << endl;
	}
	else 
	{
		final = sequence.substr(startCodon,((stopCodon - startCodon)+3));
										//If it is a gene then using the substring function to output the entire gene from the start to end codon 
		cout << final << endl;
	}

return 0;
}
