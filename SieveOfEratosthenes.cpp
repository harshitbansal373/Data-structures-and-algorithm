// C++ program to print all primes smaller than or equal to n using Sieve of Eratosthenes 

#include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	int prime[n+1]; 
	memset(prime, 1, sizeof(prime)); 
  	
  	for(int i=1;i<n+1;i++)
      cout<<prime[i]<<" ";

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p]) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = 0; 
		} 
	} 

	for (int p=2; p<=n; p++) 
	if (prime[p]) 
		cout << p << " "; 
} 

int main() 
{ 
	int n = 30; 
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
