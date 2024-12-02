use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();

    let first_line = lines.next().unwrap().unwrap();
    let mut iter = first_line.split_whitespace();

    let n = iter.next().unwrap().parse::<usize>().unwrap();
    let k = iter.next().unwrap().parse::<usize>().unwrap();

    let mut items = Vec::new();

    for _ in 0..n {
        let line = lines.next().unwrap().unwrap();
        let mut iter = line.split_whitespace();
        let weight = iter.next().unwrap().parse::<usize>().unwrap();
        let value = iter.next().unwrap().parse::<usize>().unwrap();
        items.push((weight, value));
    }

    let mut dp = vec![vec![0; k + 1]; n + 1];

    for i in 1..=n {
        let (weight, value) = items[i - 1];
        for j in 1..=k {
            if j < weight {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j].max(dp[i - 1][j - weight] + value);
            }
        }
    }

    println!("{}", dp[n][k]);


}