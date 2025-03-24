const obj = {
  fName: "Shivam",
  lName: "Singh",
  age: 27,
  fullname: function () {
    return (this.fName + " " + this.lName).toUpperCase();
  },
};
console.log("obj", obj);
console.log("obj", obj.fullname()); //
obj.address = "Lucknow";
console.log("obj", obj);
obj.sum = function (a, b) {
  return a + b;
};

console.log("obj", obj.sum(2, 5));
