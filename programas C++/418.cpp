#include <iostream>
using namespace std;
int main()
{
    int N=0, N1, N2, N3;

    cout<<"\n";
    printf("N"); printf("\t10*N"); printf("\t100*N"); printf("\t1000*N\n");

    while(N<=4)
        {
            ++N;
        printf("%d\t", N); printf("%d\t", N*10); printf("%d\t",N*100); printf("%d\n",N*1000);

        }
cout<<"\n";

return 0;
}
