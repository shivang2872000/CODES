Use Linked Lists to solve this problem. 

One fine day you decide to revise the friend list that you have on Facebook. You see that you have too many people on your friend’s list and it will be a good idea to remove some of the friends. Since you know the popularity that each of your friends, you decide to use the following algorithm.

 

Algorithm Delete(Friend):

    

DeleteFriend=false

    for i = 1 to Friend.length-1

      if (Friend[i].popularity < Friend[i+1].popularity)

            delete i th friend

            DeleteFriend=true

            break

    if(DeleteFriend == false)

 delete the last friend

Input Format
First line contains T number of test cases. First line of each test case contains N, the number of friends you currently have and K ,the number of friends you will delete. Next lines contains popularity of your friends separated by space.

Output Format
For each test case print (N-K) numbers which represent popularity of your friends after deleting K friends.

Sample Input
2
5
2
1 7
2 5
3 8
4 1
5 3
7
3
1 4
2 9
3 1
4 4
5 4
6 3
7 6
Sample Output
1 7
2 5
3 8
2 9
4 4
5 4
7 6
Explanation
In each row of the output, the first no. is the friend ID and the second number represent the corresponding popularity. print [0 0] if all friends are deleted.

Constraints
1 ≤ T ≤ 20
1 ≤ N ≤ 100
K ≤ N
