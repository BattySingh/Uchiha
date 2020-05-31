console.clear();
const fs = require('fs');

let writeStream = fs.createWriteStream('newFile.txt');
writeStream.write('Hello, to learning Node.js ');
writeStream.write('Welcome to the new world, King');

fs.readFile('newFile.txt', 'utf-8', (err, data) => {
    if (err) throw err;
    console.log(data);
});

const text = fs.readFileSync('newFile.txt', 'utf-8');
console.log(text);
