#include <iostream>
#include <vector>

using namespace std;


template <class T>
vector<T> intersection(T *array1, T *array2, size_t array1Size, size_t array2Size){
  vector<T> temp;//for storing similarities
  for(int i = 0; i < array1Size; i++){//iterate through arrays
    for(int k = 0; k < array2Size; k++){
      if(array1[i] == array2[k]){
        //if a similarity exists,
        //store the item
        temp.push_back(array1[i]);
      }
    }
  }
  return temp;//retun the vector with intersected parts.
}

//here's a version with vectors just for fun
template <class T>
vector<T> intersection(vector<T> array1, vector<T> array2){
  vector<T> temp;//for storing similarities
  for(int i = 0; i < array1.size(); i++){
    for(int k = 0; k < array2.size(); k++){
      if(array1[i] == array2[k]){
        temp.push_back(array1[i]);
      }

    }
  }
  return temp;
}

//a display function for arrays
void displayArray(int *pArray, size_t size){
  cout << "[";
  for(int i = 0; i < size; i++){
    cout << pArray[i];
    if(i != size-1){
      cout << ", ";
    }
  }
  cout << "]" << endl;
}

int main() {

  int foo[] = {1, 2, 7, 9, 4, 5};
  int bar[] = {4, 7, 3};

  vector<int> foobar = intersection<int>(foo, bar, sizeof(foo)/sizeof(foo[0]), sizeof(bar)/sizeof(bar[0]));

  cout << "Foo array: " << endl;
  displayArray(foo, 6);
  cout << "Bar array: " << endl;
  displayArray(bar, 3);
  
  cout << "Intersection of both: " << endl;
  cout << "[";
  for(int i = 0; i < foobar.size(); i++){
     cout << foobar[i];
     if(i != foobar.size()-1){
       cout << ", ";
     }
  }
  cout << "]";
}