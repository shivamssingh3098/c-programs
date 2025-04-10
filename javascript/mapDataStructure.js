let myMap = new Map([
  ["a1", "Ajay"],
  ["a2", "VIkahs"],
]);
console.log(myMap);
myMap.set("a3", "shivam");
console.log(myMap);
// myMap.delete("a1");
// console.log(myMap);
// myMap.clear();
// console.log(myMap);

console.log(myMap.get("a2"));

for (let [key, value] of myMap) {
  console.log(`${key} => ${value}`);
}

let obj = {
  name: "shivam",
  age: 25,
  num: 34,
  add: "gosian",
};

// let arr= obj
console.log(Object.entries(obj));

//weakset

let ws = new WeakSet();
let ob1 = { name: "shivam" };
let ob2 = { age: 30 };
console.log(ws);
ws.add(ob1);
console.log(ws.has(ob1));
