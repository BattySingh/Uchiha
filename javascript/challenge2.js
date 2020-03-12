//basketball challenge
var johnScoreOne = 89;
var johnScoreTwo = 120;
var johnScoreThree = 103;
var mikeScoreOne = 116;
var mikeScoreTwo = 94;
var mikeScoreThree = 123;

var johnAverage = (johnScoreOne + johnScoreTwo + johnScoreThree) / 3;
var mikeAverage = (mikeScoreOne + mikeScoreTwo + mikeScoreThree) / 3;

if (johnAverage > mikeAverage) {
    console.log("John team wins with a final average of " + johnAverage);
} else if (johnAverage < mikeAverage) {
    console.log("Mike's team wins with a final average of " + mikeAverage);
} else {
    console.log("Both teams draw eith average of " + johnAverage);
}

var maryScoreOne = 97;
var maryScoreTwo = 134;
var maryScoreThree = 105;

var maryAverage = (maryScoreOne + maryScoreTwo + maryScoreThree) / 3;
if (johnAverage > mikeAverage && johnAverage > maryAverage) {
    console.log("John team wins with a final average of " + johnAverage);
} else if (johnAverage < mikeAverage && mikeAverage > maryAverage) {
    console.log("Mike's team wins with a final average of " + mikeAverage);
} else {
    console.log("Mary's team wins with an average of " + maryAverage);
}