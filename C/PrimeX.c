#include <stdio.h>
#include <stdlib.h>

#define NL 1000000000   // number limit: 1 billion
#define LL 11           // line limit: 11 characters

int main()
{
    printf("========\n PrimeX\n========\n\n");

    FILE *fp = fopen("primes.txt", "wb");
    
    const int N = NL + 3;
    char* primes = (char*)calloc(N, sizeof(char));
    char* line = (char*)calloc(LL+1, sizeof(char));
    int l = 0;

    for (int i = 2; i < 3; ++i)
    {
        switch (primes[i])
        {
            case 0:
            itoa(i, line, 10);
            
            while (line[l] != '\0')
            {
                ++l;
            }
            line[l] = '\n';
            fwrite(line, sizeof(char), l+1, fp);

            for (int j = i+i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    for (int i = 3; i < N; i += 2)
    {
        switch (primes[i])
        {
            case 0:
            itoa(i, line, 10);
            
            while (line[l] != '\0')
            {
                ++l;
            }
            line[l] = '\n';
            fwrite(line, sizeof(char), l+1, fp);

            for (int j = i+i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    free(primes);
    free(line);
    fclose(fp);

    printf("Done :D\nCheck your folder for the results");

    return 0;
}
