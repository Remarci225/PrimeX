package Java_concurrent;

public class PrimeThread extends Thread {
    private boolean[] primes;
    private int from;
    private int to;

    public PrimeThread(boolean[] primes, int from, int to) {
        super();
        
        this.primes = primes;
        this.from = from;
        this.to = to;
    }

    @Override
    public void start() {
        super.start();
    }

    @Override
    public void run() {
        for (int i = from + from; i < to; i += from) {
            primes[i] = true;
        }
    }
}