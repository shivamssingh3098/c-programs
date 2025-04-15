// JavaScript Strings---------------

// let str = "Shiam 'Singh'";
// // console.log(str);
// let a = 100;
// let str1 = `shivam singh this is ""string"" literal ${a} ${str}`;
// // console.log(str.length);
// let text = `The quick
// brown fox
// jumps over
// the lazy dog`;
// // console.log(text);
// // let x = "John";
// // let y = new String("John");
// // console.log(x);
// // console.log(y);
// // console.log(x === y);
// // console.log(5 === "5");

// // let x = new String("John"); // x is an object
// // let y = new String("John");

// // console.log(x === y);

// let str = "shivam";

// JavaScript String Methods ----------------------

// console.log("str.charAt(2)", str.charAt(str.length - 2));
// console.log("str.at(2)", str.at(-2));
// console.log("str.charCodeAt(2)", str.charCodeAt(2));

// slice
// let text = "Apple, Banana, Kiwi";
// let part = text.slice(7, 13);
// console.log("slice", part);
// let part = text.slice(7);
// console.log(part);

// let text = "Apple, Banana, Kiwi";
// let part = text.slice(-12);
// let text = "Apple, Banana, Kiwi";
// let part = text.slice(-12, -6);
// let str = "Apple, Banana, Kiwi";
// let part = str.substring(7);
// console.log(part);
// console.log(str.charAt(0));
// for (let i = 0; i < str.length - 10; i++) {
//   //   const element = array[i];
//   console.log(` ${i} =>  ${str.charAt(i)}`);
// }
// let str = "Apple, Banana, Kiwi";
// let part = str.substr(-1);
// console.log(part);
// console.log(str.length);
// let text1 = "      Hello World!      ";

// let text2 = text1.trim();
// console.log(text2);
// console.log(text1);

// let text = "5";
// // let padded = text.padStart(10, "shi");
// let padded = text.padEnd(9, "shi");
// console.log(padded);

// let text = "Hello world!";
// let result = text.repeat(3);
// console.log(result);

// let text = "Please visit Microsoft!";
// let newText = text.replace("i", "W3Schools");
// console.log(newText);
// let spl = text.split("i");
// let joi = spl.join("=> ");
// console.log(spl);
// console.log(joi);

// let str = "Shivam";

// let newStr = str.padEnd(12, "Singh");
// console.log(newStr);

// let str = "my name is shivam sing";

// let newS = str.slice(0, 7);
// console.log(newS);

// JavaScript String Search ----------------------

// let str = "my name is shivam";

// console.log("indexOf =>", str.indexOf("i"));

// for (let index = 0; index < str.length; index++) {
//   if (str[index] == "y") {
//     console.log(index);

//     return index;
//   }
// }

// let str = "my name is shivam";

// console.log("indexOf =>", str.lastIndexOf("m"));

// let text = "Please locate where 'locate' occurs!";
// // let index = text.indexOf("locate", 15);
// // console.log(text.length); // 36

// let index = text.lastIndexOf("oc", 21);
// let text = "Please locate where 'locate' occurs!";
// let index = text.search("locate 4");
// console.log(index);

// let text = "Please locate where 'locate' occurs!";
// let index = text.match("locate");
// let text = "The rain in SPAIN stays mainly in the plain";
// let index = text.match(/ain/);
// console.log(index);
// let text = "The rain in SPAIN stays mainly in the plain";
// let index = text.matchAll(" in ");
// console.log(index);
// let a = Array.from(index);
// // console.log(typeof index);
// console.log(a);

// let text = "The rain in SPAIN stays mainly in the plainsgdsdfghgf";
// // let result = text.includes("rain", 5);
// let result = text.includes("rain");
// console.log(result);

let text = "The rain in SPAIN stays mainly in the plain.";
// let result = text.includes("rain", 5);
// let result = text.startsWith("rain", 4);
let result = text.endsWith("The", 3);

console.log(result);
