
/*
숫자 중 일부만 지워질 수 있다는 부분을 유의 필요
 */

const fs = require("fs");
const filePath = process.platform === 'linux' ? '/dev/stdin' : './input.txt';
const input = fs.readFileSync(filePath).toString().trim();

let current = 1;    // 현재 숫자
let index = 0;  // 인덱스

while (true) {
    if (index >= input.length) {
        break;
    }
    // current 숫자를 나누어 저장
    num = current.toString().split('');

    for (let i = 0; i < num.length; i++) {
        // current 자리 수 마다 input 문자열의 현재 문자와 같은지 확인
        if (num[i] === input.charAt(index)) {
            index++;

            if (index >= input.length) {
                break;
            }
        }
    }
    current++;
}
// 마지막에 current가 한 번 더 더해주므로 current - 1
console.log(current - 1);

