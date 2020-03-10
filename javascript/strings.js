console.log("This is a string");

let email = "test@gmail.com";
console.log(email);

let firstName = "Brandon";
let lastName = "Sanderson";

let fullName = firstName + " " + lastName;
console.log(fullName);

// extracting single character
console.log(fullName[0]);
console.log(fullName[5]);

console.log(fullName.length);
console.log(fullName.toUpperCase());
console.log(fullName.toLowerCase());

let lowerCaseName = fullName.toLowerCase();
console.log(lowerCaseName, " : ", fullName);

console.log(email.indexOf('@'));