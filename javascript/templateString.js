let title = 'Best reads of 2019';
let author = 'Mario';
let likes = 30;

// concatenating strings
console.log("Book " + title + " is written by " + author + " with " + likes + " likes from the readers!");

// using template strings
console.log(`Book ${ title } is written by ${ author } with ${ likes } likes from the readers!`);

// using html templates
let html = `
    <h1>Title: ${ title }</h1>
    <p>The author is ${ author }</p>
    <span><em>The blog has ${ likes } likes!</em></span>
`

console.log(html);