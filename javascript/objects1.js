let obj1 = {
    name: 'goku',
    age: 25,
    species: 'Saiyan',
    login: function() {
        return 'User logged in';
    }
};

console.log(obj1);
console.log(obj1["age"]);
console.log(obj1.name);

obj1.age = 30;
console.log(obj1.age);
console.log(obj1.login());