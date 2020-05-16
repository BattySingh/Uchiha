// Javascript challenge to find who has higer BMI between Mark and John
var markHeight, markMass, johnHeight, johnMass, markBmi, johnBmi, markHighBmi;

markHeight = prompt("Enter Marks's Height");
markMass = prompt("Enter Mark's Mass");
johnHeight = prompt("Enter John's Height");
johnMass = prompt("Enter John's Mass");

markBmi = markMass / (markHeight * markHeight);
johnBmi = johnMass / (johnHeight * johnHeight);

markHighBmi = markBmi > johnBmi;

console.log("Is Mark's BMI higher than John's ? " + markHighBmi);