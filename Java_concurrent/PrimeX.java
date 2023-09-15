package Java_concurrent;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class PrimeX {
    public static final int NL = 1000;

    public static void main(String[] args) throws IOException, InterruptedException {
        System.out.println("========\n PrimeX\n========\n");

        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter("primes.txt"));

        final int N = NL + 2;
        boolean[] primes = new boolean[N];

        PrimeThread prime2Thread = new PrimeThread(primes, 2, N);
        prime2Thread.join();
        prime2Thread.start();

        for (int i = 3; i < N; i += 2) {
            PrimeThread primeThread = new PrimeThread(primes, i, N);
            primeThread.join();
            primeThread.start();
        }

        bufferedWriter.write("" + 2);
        bufferedWriter.newLine();

        for (int i = 3; i < N; i += 2) {
            if (!primes[i]) {
                bufferedWriter.write("" + i);
                bufferedWriter.newLine();
            }
        }

        bufferedWriter.close();

        System.out.println("Done :D\nCheck your folder for the results\n");
    }
}