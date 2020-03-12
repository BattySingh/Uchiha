//operator precedence
var now = 2018;
var yearJohn = 1989;
var fullAge = 18;

var isFullAge = now - yearJohn > fullAge;
console.log(isFullAge);

var johnAge = now - yearJohn;
var markAge = 35;
var average = (johnAge + markAge) / 2;

console.log(average);

//multiple assignments
var x, y;
x = y = (3 + 5) * 4 - 6; // 8 * 4 - 6 -> 32 - 6 -> 26
console.log(x, y);

// more operators
x = x * 2;
console.log(x);

x *= 2;
console.log(x);

x += 10;
console.log(x);

x++;
console.log(x);