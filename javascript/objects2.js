const person = {
    name: "crystal",
    age: 30,
    email: 'crystal@netninja.co.uk',
    location: 'Berlin',
    blogs: ['why mac and berlin', 'make a cheese cake'],
    login: function() {
        console.log('User logged in!');
    },
    logout: function() {
        console.log('User Logged out!');
    },
    logBlogs: function() {
        console.log(this.blogs);
    }
};

let blogs = [
    { title: "this is title one", likes: 30 },
    { title: "this is title two", likes: 25 }
];

person.logBlogs();
console.log(this);

console.log(blogs[1].title);