let calcArea = function() {
    return (3.14 * 3 * 3);
}

let area = calcArea();
console.log(area);

let radius = 5;
const arrowArea = (radius) => (3.14 * radius * radius);
const newArea = arrowArea(5);
console.log("Area: " + newArea);

const greet = (name) => `Hello, ${ name }`;
const g = greet("Scooby");
console.log(g);

const bill = (products, tax) => {
    let total = 0;
    for (let i = 0; i < products.length; i++) {
        total += products[i] + (products[i] * tax);
    }
    return total;
}

const bill1 = bill([2, 3, 5, 6], 0.2);
console.log("Result: " + bill1);