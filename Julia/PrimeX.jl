NL = 1000000000

print("========\n PrimeX\n========\n\n")

file = open("primes.txt", "w")

N = NL + 2
primes = fill(true, N)

for i = 2:1:2
    if primes[i]
        write(file, string(i) * "\n")

        for j = i:i:N
            primes[j] = false;
        end
    end
end

for i = 3:2:N
    if primes[i]
        write(file, string(i) * "\n")

        for j = i:i:N
            primes[j] = false;
        end
    end
end

close(file)

print("Done :D\nCheck your folder for the results\n\n")