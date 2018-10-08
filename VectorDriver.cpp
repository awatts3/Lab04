/*
Lab04
Andrew Watts
COSC 2030
october 8 2018
*/
#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  add_numbers(sample_vector);
  print(sample_vector);
  cout << endl;

  print_even(sample_vector);
  cout << endl;

  is_present(sample_vector,7);
  is_present(sample_vector, 4);

  vector<short> sorting_vector{ 5,7,9,2,6 }; //a vector made to be sorted
  cout << "vector to be sorted:" << endl;
  print(sorting_vector);
  sort(sorting_vector.begin(),sorting_vector.end());//sorting the vector from it beging to its end
  cout << endl;
  cout << "sorted vector:" << endl;
  print(sorting_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}
