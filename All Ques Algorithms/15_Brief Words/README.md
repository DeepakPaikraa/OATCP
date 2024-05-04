Problem Definition:

Given a list of n strings, generate all unique subsequences of length k (for k from 1 to 4) for each string and output them.

Algorithm Outline:

Generate Subsequences:

The function genSubsequences generates all possible subsequences of a given length from a given string.
It uses a recursive approach to either include or exclude the current character at index, creating two recursive branches.

The base cases for recursion are:

When length is zero, indicating a complete subsequence has been formed. This is added to the result list.
When index is greater than or equal to the length of the string, meaning no further recursion is possible.

Read Input Data:

The program reads n, the number of input strings, from an input file input2.txt.
It then reads each string and stores it in a vector vs.

Generate Unique Subsequences:

For each string in vs, generate all subsequences of length 1 to 4 using the genSubsequences function.
A set is used to store unique subsequences, preventing duplicates.
The results for each string are stored in a 2D vector vs, where each sub-vector contains unique subsequences.

Output Results:

Output all unique subsequences for each string to the console and to an output file output2.txt.
Iterate through the 2D vector vs, outputting each unique subsequence in order.
Use appropriate newline characters to separate outputs for different input strings and for the end of the output.

Summary:

Recursive Generation: The genSubsequences function uses recursion to generate all possible subsequences of a given length.

Unique Subsequences: A set is used to avoid duplicate subsequences. As subsequences are generated, they are checked against the set before being added to the result list.

Output Handling: Output is directed to both the console and an output file. This is useful for saving results to a file while also displaying them on the console.
