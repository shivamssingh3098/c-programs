const person = {
  name: "Shivam Sing",
  age: 27,
  profession: "MERN Stack Developer",
  mobile: 9845126545,
};

// console.log(person.name);
// console.log(person.profession);

const person2 = {};

person2.name = "Vaibhav";
person2.age = 22;
person2.village = "murbad";

// console.log(person2.village);
// console.log(person2["village"]);

const person3 = new Object();

// console.log(typeof person3);

person3.name = "sahil";
person3.age = 25;
person3["color"] = "black";

// console.log(person3);

const person4 = {
  firstName: "Shivam",
  secondName: "Singh",
  age: 27,
  fullName: function () {
    return this.firstName + " " + this.secondName;
  },
};

console.log(person4.fullName());

const person5 = {
  firstName: "John",
  lastName: "Doe",
  age: 50,
  eyeColor: "blue",
  college: {
    clgName: "npgc",
    clgAddress: "Lucknow",
    course: "B.Voc",
  },
};
// console.log(person5);

delete person5.age;
delete person5["eyeColor"];
// console.log(person5);

console.log(person5);
