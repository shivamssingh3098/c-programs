const obj = {
  name: "shivam",
  class: "bvoc",
  phone: "73185460",
  subject: "mathis",
};

for (let a in obj) {
  //   console.log(obj[a]);
}

const objArr = Object.values(obj);

// console.log("objArr", objArr);

for (let index = 0; index < objArr.length; index++) {
  const element = objArr[index];
  //   console.log(element);
}

for (let [key, value] of Object.entries(obj)) {
  //   console.log("key :" + key + " value : " + value);
  //   console.log(key + ":" + value);
}
console.log(obj);

let stringify = JSON.stringify(obj);
console.log(stringify);
