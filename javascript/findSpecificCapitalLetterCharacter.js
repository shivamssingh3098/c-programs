let str = "Shivam Singh S";
let newStr = str.toLocaleLowerCase();
let count = 0;
let char = "s";
for (let i = 0; i < newStr.length; i++) {
  if (newStr[i] == char) {
    count += 1;
  }
}

console.log(`${char} is repeating ${count} times`);
