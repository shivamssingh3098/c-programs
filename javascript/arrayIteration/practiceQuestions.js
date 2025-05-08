// Filter even numbers from an array
let arr1 = [1, 2, 3, 4, 5];
// Output: [2, 4]

let even = arr1.filter((value) => {
  if (value % 2 == 0) {
    return value;
  }
});
// console.log("even", even);
// console.log(arr1);

// Filter out null or undefined values

let arr2 = [1, null, 2, undefined, 3];

let v1 = arr2.filter((value) => {
  if (value !== null && value !== undefined) {
    return value;
  }
});
// console.log("v1", v1);

// Filter objects with a specific property

let ar3 = [{ name: "A", age: 33 }, { age: 20 }, { name: "B", phone: "5678" }];

let v2 = ar3.filter((value, i) => {
  if (value.hasOwnProperty("phone")) {
    return value;
  }
});
// console.log(v2);

// Filter strings longer than 3 characters

let sr4 = ["hi", "world", "JS", "React"];

let v4 = sr4.filter((value) => {
  return value.length > 3;
});
// console.log(v4);

// Filter nested arrays with length > 2
let ar5 = [[1], [1, 2], [1, 2, 3], [1, 2, 3, 4]];
let v5 = ar5.filter((value) => value.length > 2);
console.log(v5);

// reducer

// Input: ['a', 'b', 'a', 'c', 'b', 'a']
// Output: { a: 3, b: 2, c: 1 }

let ar6 = ["a", "b", "a", "c", "b", "a"];

let v6 = ar6.reduce((acc, curr) => {
  acc[curr] = (acc[curr] || 0) + 1;
  console.log(acc[curr]);

  return acc;
}, {});
// console.log(v6);
