print("========\n PrimeX\n========\n")

limit = 1000000001

P = [True]*(limit+2)

f = open("primes.txt", "w")
for i in range(2, limit + 2):
    if P[i]:
        f.write(str(i)+"\n")
        for j in range(i+i, limit + 2, i):
            P[j] = False
f.close()

P = []

print("Done :D\nCheck your folder for the results")