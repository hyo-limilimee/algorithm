const fs = require('fs');
const filePath = process.platform === 'linux' ? '/dev/stdin' : './input.txt';
const input = fs.readFileSync(filePath).toString().split('\n');

function solution(input) {
    const num = Number(input[0].trim());
    let dasomVotes = Number(input[1].trim());
    let votes = input.slice(2).map(line => Number(line.trim()));

    let bought = 0;

    while (votes.length > 0 && dasomVotes <= Math.max(...votes)) {
        votes[votes.indexOf(Math.max(...votes))]--;
        dasomVotes ++;
        bought++;
    }

    return bought;
}

console.log(solution(input));