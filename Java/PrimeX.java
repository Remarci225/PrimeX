package Java;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class PrimeX {
    public static final int NL = 1000000000;

    public static void main(String[] args) throws IOException {
        System.out.println("========\n PrimeX\n========\n");

        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter("primes.txt"));

        final int N = NL + 2;
        byte[] primes = new byte[N];

        for (int i = 2; i < 3; ++i) {
            switch (primes[i]) {
                case 0:
                    bufferedWriter.write("" + i);
                    bufferedWriter.newLine();

                    for (int j = i; j < N; j += i) {
                        primes[j] = 1;
                    }
                    break;
            }
        }

        for (int i = 3; i < N; i += 2) {
            switch (primes[i]) {
                case 0:
                    bufferedWriter.write("" + i);
                    bufferedWriter.newLine();

                    for (int j = i; j < N; j += i) {
                        primes[j] = 1;
                    }
                    break;
            }
        }

        primes = null;
        bufferedWriter.close();

        System.out.println("Done :D\nCheck your folder for the results\n");
    }
}