var massJohn = 25;
var heightJohn = 4.5;
var massMark = 20;
var heightMark = 5.5;

var bmiJohn = massJohn / (heightJohn * heightJohn);
var bmiMark = massMark / (heightMark * heightMark);

var markHasBmi = bmiMark > bmiJohn;
console.log("Is Marrk's BMI higher than John's? " + markHasBmi);