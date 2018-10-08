/*
Lab04
Andrew Watts
COSC 2030
october 8 2018
*/


/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <ctime>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

void add_numbers(vector<short> &data){
	 
	cout << "adding 10 random numbers to vector"<< endl;

	for (int i = 0; i <= 9; i++) {

		srand(time(NULL)^i); //this isn't super random but at least it gives a new seed value for each loop through
		int add;
		add = rand() % 100; //makes a pusdorandom int between 0 and 99

		data.push_back(add);//adds the number to the end of the vector
	}
}

void print_even(const vector<short>& data) {

	cout << "Printing values of the vector stored at even index points: " << endl;

	

	for (int i = 0; i <= data.size(); i+= 2) { //Iterates through every even index for the vector
	
			cout << data.at(i); //Prints the values at the even index points
			cout << ", ";
	}

	
	
}

bool is_present(const vector<short> &data, short value) {

	cout << "checking if the vector contains the number " << value << endl;

	for (int i = 0; i < data.size(); i++) { //iterates through the vector

		if (data.at(i) == value) {//checks for the given value
			cout << "true" << endl;
			return(true);//returns true if it finds the value
		}
	}
	cout << "false" << endl;
	return(false);//returns false otherwise
}
// done: implement add_numbers 
// done: implement print_even
// done: implement is_present
// done: implement std::sort function
