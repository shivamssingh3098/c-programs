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

console.log("mapV", mapV);
console.log("arr", arr);
