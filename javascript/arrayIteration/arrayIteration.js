let arr = [10, 20, 30, 40];

// console.log(arr);
// arr.forEach((value, i, ar) => {
//   //   console.log(value);
//   console.log(`${i}:${value}`);
//   console.log(ar);
// });

// map function

// let mapV = arr.map((value, i, ar) => {
//   // console.log(`${i}:${value}`);
//   // console.log(ar);
//   return value + 10;
//   // return `${i}:${value}`;
// });

// let mapV = arr.flatMap((value, i, ar) => {
//   return [value, value * 2];
// });

// let mapV = arr.filter((value, i, ar) => {
//   return value > 10;
// });

let mapV = arr.reduce((hold, value, i, ar) => {
  return (hold = hold + value);
});

// console.log("mapV", mapV);
// console.log("arr", arr);

const numbers = [45, 4, 9, 16, 25];

let sum = numbers.reduce((acc, curr, index, ar) => {
  // console.log("reduce", curr);

  return (acc = acc + curr);
}, 0);
// console.log("sum", sum);

let sumRight = numbers.reduceRight((acc, curr, index, ar) => {
  // console.log("reduceRight", curr);
  return (acc = acc + curr);
}, 0);
// console.log("sumRight", sumRight);

let every = numbers.every((value) => value > 16);
// console.log("every", every);

let some = numbers.some((value) => value > 16);
// console.log("some", some);

let str = "this is shivam";
let ar2 = Array.from(str);
// console.log("ar2", ar2);
// console.log("str", str);
let obj = { name: "shiva", age: 45, add: "dgi", phone: "67890" };

// let ar3 = Array.from(obj);
// console.log("ar3", ar3);

// ar2.forEach((v) => console.log(v));
// ar3.forEach((v) => console.log(v));

const fruits = ["Banana", "Orange", "Apple", "Mango"];
const keys = fruits.keys();
// console.log("keys", typeof keys);
for (let x of keys) {
  // console.log("x", x);
}

const fru = ["Banana", "Orange", "Apple", "Mango"];
const f = fru.entries();

for (let x of f) {
  // console.log(x);
}
// const months = ["Januar", "Februar", "Mar", "April"];
// const myMonths = months.with(2, "March");

// console.log("myMonths", myMonths);

const q1 = ["Jan", "Feb", "Mar"];
const q2 = ["Apr", "May", "Jun"];
const q3 = ["Jul", "Aug", "Sep"];
const q4 = ["Oct", "Nov", "Des"];

const year = [...q1, ...q2, ...q3, ...q4];
const withoutSpread = [q1, q2, q3, q4];
console.log("year", year);
console.log("withoutSpread", withoutSpread);
