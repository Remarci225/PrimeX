const NL = 100000000;

console.log("========\n PrimeX\n========\n");

const fs = require("fs");
const writeStream = fs.createWriteStream("primes.txt");

const N = NL + 2;
let primes = Array(N).fill(true);

for (let i = 2; i < 3; ++i) {
    if (primes[i]) {
        writeStream.write(i + '\n');

        for (let j = i; j < N; j += i) {
            primes[j] = false;
        }
    }
}

for (let i = 3; i < N; i += 2) {
    if (primes[i]) {
        writeStream.write(i + '\n');

        for (let j = i; j < N; j += i) {
            primes[j] = false;
        }
    }
}

primes = null;
writeStream.close();

console.log("Done :D\nCheck your folder for the results\n");