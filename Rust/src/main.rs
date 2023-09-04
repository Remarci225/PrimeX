use std::fs::File;
use std::io::{BufWriter, Write};

const NL :usize = 1000000000;

fn main() {
    println!("========\n PrimeX\n========\n");

    let mut buf_writer = BufWriter::new(File::create("primes.txt").expect("Unable to create \"primes.txt\""));

    const N: usize = NL + 2;
    let mut primes = vec![false; N];

    
    for i in 2..3 {
        if !primes[i] {
            write!(buf_writer, "{}\n", i).expect("Couldn\'t write to \"primes.txt\"");

            for j in (i..N).step_by(i) {
                primes[j] = true;
            }
        }
    }

    for i in (3..N).step_by(2) {
        if !primes[i] {
            write!(buf_writer, "{}\n", i).expect("Couldn\'t write to \"primes.txt\"");

            for j in (i..N).step_by(i) {
                primes[j] = true;
            }
        }
    }
    
    println!("Done :D\nCheck your folder for the results\n");
}