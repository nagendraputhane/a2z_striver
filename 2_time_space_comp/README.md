Depending on the system, the code can take different times to execute. Thus time complexity != time taken.
Time complexity - rate at which the time taken increases with respect to the input size.
Big O - O(time taken). - number of steps the code will take.
Some rules: take the worst case, avoid constant, avoid lower values.

for(i=0;i<n;i++); for(j=0;j<i;j++); = 1 + 2 + 3 + .. + n; = n(n+1)/2 = n^2 = O(n^2).

Space complexity: 1) Auxiliary spcae - space to solve the problem. 2) Input space - the space that you use to store the input.
If using array of size n = O(n).  

1 second = 1*10^8 operations = O(10^8)