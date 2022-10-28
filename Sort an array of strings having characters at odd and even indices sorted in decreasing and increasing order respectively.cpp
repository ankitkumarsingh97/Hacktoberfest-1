// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to sort even indices in
// ascending order and odd indices in
// descending order and sort the array
// of strings in ascending order
void sortString(string S[], int N)
{
	// Traverse array of strings
	for (int i = 0; i < N; i++) {

		// Sort string in ascending order
		sort(S[i].begin(), S[i].end());

		// Length of string
		int n = S[i].size();

		string temp = "";

		// Traverse the string
		for (int j = 0; j < n / 2; j++) {
			temp += S[i][j];
			temp += S[i][n - j - 1];
		}

		// If length of string is odd
		if (n & 1)
			temp += S[i][n / 2];

		S[i] = temp;
	}

	// Sort array of strings
	sort(S, S + N);

	// Print array of strings
	for (int i = 0; i < N; i++) {
		cout << S[i] << " ";
	}
}

// Driver Code
int main()
{
	string arr[] = { "ball", "bat", "boy" };
	int N = sizeof(arr) / sizeof(arr[0]);
	sortString(arr, N);

	return 0;
}
