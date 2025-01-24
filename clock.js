/* Last updated: 24.01.2024, 16:20
   Report bugs if there are any */

let time = new Date();

let hours = time.getHours();
let minutes = time.getMinutes();

if (minutes < 10) {
    minutes = "0" + minutes;
}  

console.log(hours + ":" + minutes);
