var firstName = "John";
var age = 16;

age >= 18 ? console.log(firstName + " drinks bear!") : console.log(firstName + " drinks juice");

var drink = age >= 18 ? "bear" : "juice";
console.log(drink);

if (age <= 18) {
    console.log("juice");
} else {
    console.log("bear");
}

// switch statment
var job = "teacher";
switch (job) {
    case "teacher":
        console.log(firstName + " teaches kids how to code!");
        break;
    case "driver":
        console.log(firstName + " drives an uber in Lisbon");
        break;
    case "designer":
        console.log(firstName + " designs beautiful websites");
        break;
    default:
        console.log(firstName + " does something else");
}

switch (true) {
    case (age <= 13):
        console.log(firstName + " is a boy");
        break;
    case (age <= 20):
        console.log(firstName + " is a teenager");
        break;
    case (age <= 30):
        console.log(firstName + " is a young man");
        break;
    default:
        console.log(firstName + " is a full age man");
}