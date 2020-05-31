console.log('hello');
console.log("WOrld");

console.log('a', 'b');

let email = "mario@thenetninja.com";
console.log(email);

let firstName = "Brandon";
let lastName = "Sanderson";
console.log(firstName, lastName);
console.log(firstName +" " + lastName); // concatenating strings with +

// using square bracket notation
console.log("First character in email: " + email[0]);
console.log("Third character in email: " + email[3]);

// length property to get the number of characters inside it
console.log("Length of Email: ", email.length);

// string methods
console.log(firstName.toUpperCase()); // make the string into uppercase. Do not alter the original value

console.log("Last name in loercase: " + lastName.toLowerCase()); // do not alter the original value

console.log(firstName, lastName);

console.log(email.indexOf('@'));
console.log(email.indexOf('w'));

console.log(email.lastIndexOf('@'));
console.log(email.lastIndexOf('m'));
console.log(email.slice(0,3));
console.log(email.slice(1,));

console.log(email.substr(2, 3)); // sub string
// replace a certain character
console.log(email.replace('m', 'd'));
console.log(email.replace("@", "#"));