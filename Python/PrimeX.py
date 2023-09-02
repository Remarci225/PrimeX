NL = 1000000000

print("========\n PrimeX\n========\n")

f = open("primes.txt", "w")

N = NL + 2
primes = [True]*(N)

for i in range(2, 3):
    if primes[i]:
        f.write(str(i) + "\n")
        for j in range(i+i, N, i):
            primes[j] = False

for i in range(3, N, 2):
    if primes[i]:
        f.write(str(i) + "\n")
        for j in range(i+i, N, i):
            primes[j] = False

P = []
f.close()

print("Done :D\nCheck your folder for the results\n")