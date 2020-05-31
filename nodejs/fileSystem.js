// Learning about file system in Node.js

const http = require('http');
const fs = require('fs');
// console.log(fs);

// http.createServer(function() {
    fs.readFile('hello.txt', 'utf-8', (err, data) => {
        if (err) throw err;
        console.log(data);
    });
// }).listen(8080);
