# Danny-Wants-to-know-Codechef
## Danny Wants To Know        Problem Code: DANOW

#### All submissions for this problem are available.As we know, Danny has a huge army and each time she wins a battle the size of her army is increased. Missandei, her advisor and Handmaiden, keeps the log of each battle and the amount and strength of soldiers won in a battle.

#### Now, Danny has some questions for Missandei in which she asks the strength of the army gained during some battles. She will ask the query of the form L,R and Missandei has to tell the strength gained in between the L and R battles. Help Missandei.

#### You are given an array A, where A[i] represents the number of soldiers won in ith battle and the strength of a soldier who won in ith battle is given in another array B[i]. ( B[i] represents the strength of each soldier who won in the ith battle).

### Input:
#### First line will contain N and Q, number of battles fought and number of queries.
#### Next line contains N space separated integers denoting the array A.
#### Next line contains N space separated integers denoting the array B.
#### Next Q lines contain two integers L and R.

### Output:
#### For each query, output the strength gained in between the L and R battles (both inclusive).

### Constraints
#### 1≤N,Q≤1000
#### 0≤A[i]≤106
#### 0≤B[i]≤106
#### 1≤L≤R≤N

### Sample Input:
#### 5 3
#### 2 3 1 6 5
#### 1 2 3 4 5
#### 2 3
#### 1 1
#### 1 5

### Sample Output:
#### 9
#### 2
#### 60

### EXPLANATION:
#### For the first query, strength gained in 2nd battle is 2∗3=6 and in 3rd battle is 3∗1=3. Total = 6+3=9.
