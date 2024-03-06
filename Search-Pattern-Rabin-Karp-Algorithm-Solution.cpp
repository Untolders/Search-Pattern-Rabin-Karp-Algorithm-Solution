################################################################################  Question  ##########################################################################################################################
Given two strings, one is a text string and other is a pattern string. The task is to print the indexes of all the occurences of pattern string in the text string. For printing, Starting Index of a string should be taken as 1. The strings will only contain lowercase English alphabets ('a' to 'z').

Example 1:

Input: 
text = "birthdayboy"
pattern = "birth"
Output: 
[1]
Explanation: 
The string "birth" occurs at index 1 in text.
Example 2:

Input:
text = "geeksforgeeks"
pattern = "geek"
Output: 
[1, 9]
Explanation: 
The string "geek" occurs twice in text, one starts are index 1 and the other at index 9.
Your Task:
You don't need to read input or print anything. Your task is to complete the function search() which takes the string text and the string pattern as input and returns an array denoting the start indices (1-based) of substring pattern in the string text. 

Expected Time Complexity: O(|text| + |pattern|).
Expected Auxiliary Space: O(1).

Constraints:
1<=|text|<=5*105
1<=|pattern|<=|text|




################################################################################  Solution  ##########################################################################################################################

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            
               vector<int> ans;
            
            for(int i = 0 ; i < txt.size() ; i++){
                int ptr = i;
                int j = 0;      
                
                while(pat[j] == txt[i] and j < pat.size()){
                    i++;
                    j++;
                }
                if(j == pat.size()){
                    ans.push_back(ptr+1);
                }
                    i = ptr;
            }
            
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

