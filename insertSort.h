#pragma once
#include <iostream>
#include <string>

using namespace std;



template <class TBD>

void insertSort(TBD array[], int length) {
	for (int first = 1; first < length; first++) {
		if (array[first] < array[first - 1]) {
			TBD temp = array[first];
			int location = first;

			do {
				array[location] = array[location - 1];
				location--;
			} while (location > 0 && array[location - 1] > temp);
			array[location] = temp;
		}
		cout << "Updated list:" << endl;
		for (int i = 0; i < length; i++) {

			cout << array[i] << " ";
		}
		cout << endl;
	}
}