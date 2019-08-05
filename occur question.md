Write a program to return the maximum occurring character in an input string. The time complexity of your method should not be more than O(nlgn), n is the length of the input string.

Note:

The string can be composed of any characters.
The counting of characters is not case sensitive and the equivalant lower-case characters should be considered for the output.
The output for the highest occurrence of "space" character should be "sp".
Input Format
The first line contains a single integer T, denoting the number of testcases. For each testcase, A string of characters must be the input.

Output Format
For each testcase, output the highest occurring character in the string. output "sp" (without quotes) for the space character.

Sample Input
3
GOOD day to code.
#Nice #day #to #code.
A Good day to code .
Sample Output
o
#
sp
Explanation
In the first case, the no. of occurrence of 'o' is the highest, ignoring the case, hence, 'o' is the output. In the second and the third cases the highest occurring characters are, '#' and ' ' (space) respectively, hence, '#' and 'sp' are the outputs.

Constraints
1 ≤ T ≤ 20
