NL <- 1000000000

cat("========\n PrimeX\n========\n\n")

file_connection <- file("primes.txt", "w")

N <- NL + 2
primes <- rep(TRUE, N)

i <- 2
while (i < 3) {
    if (primes[i]) {
        write(i, file = file_connection, append = TRUE, sep = "\n")
    }

    j <- i
    while (j < N) {
        primes[j] <- FALSE
        j <- j + i
    }

    i <- i + 1
}

i <- 3
while (i < N) {
    if (primes[i]) {
        write(i, file = file_connection, append = TRUE, sep = "\n")
    }

    j <- i
    while (j < N) {
        primes[j] <- FALSE
        j <- j + i
    }

    i <- i + 2
}

primes <- NULL
close.connection(file_connection)

cat("Done :D\nCheck your folder for the results\n")