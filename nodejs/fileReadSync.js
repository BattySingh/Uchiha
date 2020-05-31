// file reading through sync
const fs = require('fs');

console.clear(); // clears the console screen
const x = fs.readFileSync('hello.txt', 'utf-8');
console.log(x);
