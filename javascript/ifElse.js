var firstName = "John";
var civilStatus = "single";

if (civilStatus === "married") {
    console.log(firstName + " is married!");
} else {
    console.log(firstName + " is single");
}

var age = 16;
if (age < 13) {
    console.log(firstName + " is a boy");
} else if (age >= 13 && age <= 20) {
    console.log(firstName + " is a teenager");
} else {
    console.log(firstName + " is a man");
}