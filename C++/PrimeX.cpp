#include <iostream>
#include <fstream>
#include <string>

#define NL 1000000000 // number limit: 1 billion

int main()
{
    std::cout << "========\n PrimeX\n========\n"
              << std::endl;

    std::ofstream file;
    file.open("primes.txt");

    const int N = NL + 2;
    char *primes = new char[N]{0};

    for (int i = 2; i < 3; ++i)
    {
        switch (primes[i])
        {
        case 0:
            file << std::to_string(i) << '\n';

            for (int j = i + i; j < N; j += i)
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
            file << std::to_string(i) << '\n';

            for (int j = i + i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    delete primes;
    file.close();

    std::cout << "Done :D\nCheck your folder for the results\n"
              << std::endl;

    return 0;
}