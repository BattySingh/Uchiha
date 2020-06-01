const people = ['mario', 'naruto', 'goku', 'chun-li', 'scooby'];

let html = ``;
people.forEach(name => {
    html += `<li style="color: violet;">${ name }</li>`
});

let ul = document.querySelector('.people');
ul.innerHTML = html;