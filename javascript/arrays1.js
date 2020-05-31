let ninjas = ['shaun', 'ryu', 'chun-li'];
console.log(ninjas);

// square bracket notation
console.log("First element in array: " + ninjas[0]);
console.log("Number of elements in the array: " + ninjas.length);

// overwriting values inside an array
ninjas[1] = 'ninja hattori';
console.log(ninjas);

let ages = [20, 25, 30, 35];
console.log(ages);
console.log("3rd age: " + ages[2]);

// some more fun with arrays
let random = ['shaun', 'chun-li', 30, true, 'hello', 99];
console.log(random);
console.log(random[2]);
console.log(random[3]);
console.log(random[1]);

// some array methods
console.log(ninjas.join(','));
console.log(ninjas.indexOf('ryu'));
console.log(ninjas.indexOf('shaun'));
console.log(ninjas.concat(ages));
ninjas.push('ninja1', 'ninja2');
console.log(ninjas);
ninjas.pop();
console.log(ninjas);
ninjas.push(ages);
console.log(ninjas);