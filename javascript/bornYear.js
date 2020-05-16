var age = prompt("Enter your age: ");
var today = new Date();
var currentYear = today.getFullYear();

var bornYear = currentYear - age;

console.log("You were born in year " + bornYear);