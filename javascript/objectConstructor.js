function Person(fname, lname, age, phone, gender) {
  this.fname = fname;
  this.lname = lname;
  this.age = age;
  this.phone = phone;
  this.gender = gender;
  this.nationality = "India";
  this.fullName = function () {
    return this.fname + " " + this.lname;
  };
}

const vaibhav = new Person("Vaibhav", "Verma", 23, 2423433433, "male");
const shivam = new Person("Shivam", "Singh", 27, 7567876567, "male");
Person.prototype.designationsssss = "MERN Stack Developer";
Person.prototype.language = "English";
Person.prototype.mergeNameWithAge = function () {
  return this.fname + " " + this.age;
};
shivam.changeName = function (fname, lname) {
  this.fname = fname;
  this.lname = lname;
};

// console.log(vaibhav);
console.log(shivam);
// shivam.designation = "MERN Stack Developer";
// console.log(shivam.designationsssss);
console.log(shivam.changeName("Alok", "Verma"));
console.log(vaibhav.mergeNameWithAge());
console.log(globalThis);
// const obj = new Object();
const obj = {};
console.log(typeof obj);
