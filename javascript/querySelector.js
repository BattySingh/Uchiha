const para = document.querySelector('p');
console.log(para);

const errorText = document.querySelector('.error');
console.log(errorText);

const myDiv = document.querySelector('div');
console.log(myDiv);

const divError = document.querySelector('div.error');
console.log(divError);

const selectAll = document.querySelectorAll('p');
console.log(selectAll);

selectAll.forEach((i) => {
    console.log(i);
});