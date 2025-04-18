const arrr = [10, 20, 30, 40, 50];

// console.log(arr);
// const cars = ["Saab", "Volvo", "BMW", 58, 90, "alok"];

// cars[1] = "sh";
// console.log(cars);
// console.log(cars.toString());
// console.log(cars[cars.length - 2]);

// cars.forEach((ele) => {
//   console.log(ele);
// });

// let arr = ["shivam", "alok", "vaibhav"];
// console.log(arr);

// arr[arr.length] = "yash"; // arr[3] = "yash";
// console.log(arr);
// const points = new Array(40);
// let pints = [40];
// for (let index = 0; index < points.length; index++) {
//   console.log(`${index} => ${points[index]}`);
// }

// let arr = ["shivam", "alok", "vaibhav"];

// let obj = { name: "shivam" };

// console.log(Array.isArray(arr));

// console.log(obj instanceof Array);

let obj = {
  name: "shivam",
  age: 32,
  fGame: ["Martial arts", "Stunts", "Cricket"],
  addresses: [
    { city: "lko", village: "ratai" },
    { city: "thane", village: "Kajikheda" },
  ],
};

for (let value in obj) {
  if (obj[value] instanceof Array) {
    // console.log(obj[value]);
    obj[value].forEach((v) => {
      if (typeof v == "object") {
        for (let objV in v) {
          console.log(v[objV]);
        }
      } else {
        console.log(v);
      }
    });
  } else {
    console.log(obj[value]);
  }
}
