// Create a Set
// const letters = new Set(["a", "b", "c"]);

// Does the Set contain "d"?
// answer = letters.has("d");

// for (let i = 0; i < letters.length; i++) {
//   console.log("letters: ", letters);
// }
// for (const element of letters) {
//   console.log(element);
// }

// console.log("letters.has(a)", letters.has("c"));
// letters.forEach((v) => console.log(v));

// let values = letters.values();
// // console.log(values);
// for (const element of values) {
//   console.log("ele", element);
// }

// Create a Set
const letters = new Set(["a", "b", "c"]);

// Create an Iterator
const myIterator = letters.keys();

// List all Elements
let text = "";
for (const x of myIterator) {
  //   console.log(x);
}
