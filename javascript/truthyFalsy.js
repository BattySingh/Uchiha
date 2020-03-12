var height;

if (height) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}

height = 5;
if (height) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}

height = 0;
if (height || height === 0) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}

height = null;
if (height) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}

height = "";
if (height) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}

height = "string";
if (height) {
    console.log("variable has been defined");
} else {
    console.log("variables has NOT been defined");
}