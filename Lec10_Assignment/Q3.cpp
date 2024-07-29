// Q3: Find the output of the following code snippet.
// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

// Output - 11 10 11 
// 1. ptr store add of a
// 2. b = a+1 (10+1=11)
// 3. now ptr points to add of b
// 4. *ptr means --> 11 (Which is the value that is store in b)