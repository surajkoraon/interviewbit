unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int n;
    int i=0;
    while(A)
    {
        n=n+pow(2,31-i)*(A%2);
        A=A/2;
        i++;
    }
    return n;
}