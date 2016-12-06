
#include<String.h>
#include<stdio.h>
int fact(int n)
{
    return (n==1)? 1 : n*fact(n-1);
}
int main()
{
    string s = "ABC";
    printPermutation(s);
      int n = s.length();
    int fc = fact(n);
    int j = 1;
    int count=0;
    int m = 0;
    for (int perm_c = 0; perm_c < fc; )
    {
       
        string perm = s;
 
    
        int k = 0;
        while (k != fc/n)
        {
           
            while (j != n-1)
            {
                // Print current permutation
                cout << perm << "\n";
                count++;
                // Swap perm[j] with next character
                swap(perm[j], perm[j+1]);
 
                // Increment count of permutations for this
                // cycle.
                k++;
 
                // Increment permutation count
                perm_c++;
 
                // Increment 'j' to swap with next character
                j++;
            }
 
            // Again point j to the 2nd position
            j = 1;
        }
 
        // Move to next character to be fixed in s[]
        m++;
 
        // If all characters have been placed at
        if (m == n)
           break;
 
        // Move next character to first position
        swap(s[0], s[m]);
    }
    
    printf("%d",count);
    return 0;
}
