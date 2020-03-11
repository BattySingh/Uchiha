let ninjas = ['shaun', 'ryu', 'chun-li'];

console.log(ninjas);
console.log("Ninja 1: " + ninjas[0]);
console.log("Ninja 3: " + ninjas[2]);
console.log(ninjas[4]);

let ages = [20, 25, 30, 35];
console.log("Age 3: " + ages[2]);

let random = ['mname', 34, 'jiraya'];
console.log(random[2]);

console.log("Length of ninjas array: " + ninjas.length);

let joinRes = ninjas.join(',');
console.log("Join method: " + joinRes);

let indexOf = ninjas.indexOf('ryu');
console.log("Index of ryu: " + indexOf);

let concatRes = ninjas.concat(ages);
console.log("Concatenated result: " + concatRes);

let pushNinja = ninjas.push('Ninja Hattori');
console.log("Push Ninja: " + pushNinja);
console.log(ninjas);

let popRes = ninjas.pop();
console.log(popRes);
console.log(ninjas);