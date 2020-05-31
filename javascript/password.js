const password = "passpasspas@";

if (password.length >= 12 && password.includes('@')) {
    console.log("Quite a strong password!");
} else if (password.length >= 8 || password.includes('#')) {
    console.log("Long password");
} else {
    console.log("Weak password");
}

let age ="";
if (!age) console.log("Age is empty");