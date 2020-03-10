let email = "mario@thenetninja.co.uk";

let lastIndex = email.lastIndexOf('.');
console.log("Last index of . is: " + lastIndex);

let indexOf = email.indexOf(".");
console.log("Index of .: " + indexOf);

let sliced = email.slice(0);
console.log("Slice from 0: " + sliced);

let sliced1 = email.slice(4);
console.log("Slice from 4: " + sliced1);

let slicedEnd = email.slice(0, 3);
console.log("Slice from 0 to 3: " + slicedEnd);

let substring = email.substr(0, 8);
console.log("The substring is: " + substring);

substring = email.substr(3, 8);
console.log("The substring is: " + substring);

let replaced = email.replace("@", "##");
console.log("Replaced: " + replaced);
console.log("Original: " + email);