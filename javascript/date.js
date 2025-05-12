new Date();
// new Date(date string)

// new Date(year, month);
// new Date(year, month, day);
// new Date(year, month, day, hours);
// new Date(year, month, day, hours, minutes);
// new Date(year, month, day, hours, minutes, seconds);
// new Date(year, month, day, hours, minutes, seconds, ms);

// new Date(milliseconds);
// const d = new Date("October 13, 2014 11:13:00");
// const d = new Date(2018, 11, 24, 10, 33, 30, 0);
// console.log(new Date());
// const d = new Date();
// d.toDateString();
// const d = new Date();
// d.toUTCString();
// const d = new Date();
// // d.toISOString();
// // const d = new Date(2024, 10, 18);
// const d = new Date();
// // let year = d.getFullYear();
// // const d = new Date("2021-03-25");
// let month = d.getMonth();
// // console.log(month);
// const day = new Date();
// let dd = day.getDay();
// // console.log(dd);

const d = new Date("January 01, 2025");
d.setFullYear(2020, 11, 3);
console.log(d);
