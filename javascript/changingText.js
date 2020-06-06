const firstPara = document.querySelector('p');
console.log(firstPara.innerText);

firstPara.innerText = "Jurassic World";

const allP = document.querySelectorAll('p');
allP.forEach(text => {
    text.innerText = 'I am changed paragraph';
});

let content = document.querySelector('.content');
console.log(content.innerHTML);
content.innerHTML = "<strong>I am strong</strong>";
console.log(content.innerHTML);

const people = ['mario', 'shaun', 'joshi'];
people.forEach(person => {
    content.innerHTML += `<p>${ person }</p>`;
});