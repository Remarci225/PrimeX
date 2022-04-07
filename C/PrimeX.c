#include <stdio.h>
#include <string.h>

int main()
{
    printf("========\n PrimeX\n========\n\n");

    FILE *fp;
    fp = fopen("primes.txt", "w+");
    
    const int N = 1000000001;
    static int primes[1000000003] = {0};

    for (int i = 2; i < N+2; ++i)
    {
        switch (primes[i])
        {
            case 0:
            primes[i] = i;
            fprintf(fp,"%d\n", i);
            for (int j = i+i; j < N + 2; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    fclose(fp);

    printf("Done :D\nCheck your folder for the results");

    return 0;
}
