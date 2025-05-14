const map = new Map([
  ["vaibhav", 22],
  ["Shivam", 27],
  ["darpan", 24],
  ["sahil", 29],
]);
// console.log(map);

const mapWithSet = new Map();

mapWithSet.set("name", "shivam");
mapWithSet.set("age", 24);
mapWithSet.set(2, "alok");
// console.log(mapWithSet);
// console.log(mapWithSet.get("name"));
// console.log(mapWithSet.size);
// mapWithSet.delete("name");
// mapWithSet.clear();
// console.log(mapWithSet.has("name"));

// mapWithSet.forEach((value, key) => {
//   console.log(`${key} : ${value}`);
// });

let entries = mapWithSet.entries();
let keys = mapWithSet.keys();
let values = mapWithSet.values();
// console.log("entries", entries);
// console.log("keys", keys);
// console.log("values", values);

// for (const element of mapWithSet.entries()) {
//   console.log(element);
// }

// for (const element of mapWithSet.keys()) {
//   console.log(element);
// }

// for (const element of mapWithSet.values()) {
//   console.log(element);
// }

// Create Objects
const apples = { name: "Apples" };
const bananas = { name: "Bananas" };
const oranges = { name: "Oranges" };

// Create a Map
const fruits = new Map();

// Add new Elements to the Map
fruits.set(apples, 500);
fruits.set(bananas, 300);
fruits.set(oranges, 200);

fruits.forEach((value, key) => {
  console.log(`${key.name} : ${value}`);
});
