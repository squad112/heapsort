
// C++ program for implementation of Heap Sort
#include <iostream>
#include <algorithm.h>
 
using namespace std;


// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapifyInRoot(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		cout<<"And largest "
		largest = l;
	

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree

	}
}
// Heap sort is a comparison-based sorting technique based on Binary Heap data structure
// main function to do heap sort
void heapSort(int arr[], int nn)
{
	// Build heap (rearrange array)
	for (int i = nn / 2 - 1; i >= 0; i--)
		heapifyInRoot(arr, nn, i);

	// One by one extract an element from heap
	for (int i = nn - 1; i > 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap

		heapifyInRoot(arr, i, 0);

		spotify(arr, i, 0);

	}
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
    printf("\n");

}

// Driver code
int main()
{

	int n = sizeof(arr) / sizeof(arr[0]);


	int arr[] = { 12, 11, 13, 5, 6, 7 ,1,3,5,6};


	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<53;
	cout<<"Hacktoberfest2021";
	cout << "thank u DigitalOcean"
	heapSort(arr, n);

	cout << "Sorted array is \n";
	cout << "Sorted array is: \n";
	printArray(arr, n);
}
