#include <iostream>
#include <charconv>
#include <fstream>

using namespace std;

int main()
{
    cout << "========\n PrimeX\n========\n" << endl;

    ofstream file;
    file.open("primes.txt");

    const int N = 1000000001;
    static int primes[1000000003] = {0};
    
    string buffer;

    for (int i = 2; i < N+2; ++i)
    {
        switch (primes[i])
        {
            case 0:
            primes[i] = i;
            buffer.append(to_string(i) + "\n");
            for (int j = i+i; j < N+2; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    file << buffer;
    file.close();

    cout << "Done :D\nCheck your folder for the results" << endl;

    return 0;
}
