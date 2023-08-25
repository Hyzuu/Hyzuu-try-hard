// forEach
const animals = ['Dog', 'Cat', 'Butterfly', 'Dog'];
const profile = {
    name: 'Hyzuu',
    age: 19,
    school: 'FPT'
}

// Array.prototype.forEach2 = function(callBack) {
//     var arrLength = this.length;
//     for (let i = 0; i < arrLength; i++) {
//         callBack(this[i]);
//     }
// }

// animals.forEach2((animal, index) => {
//     console.log(animal);
// });

// find

// Array.prototype.find2 = function(callBack) {
//     var arrLength = this.length;
//     for (let i = 0; i < arrLength; i++) {
//         if(callBack(this[i], i, this)) return this[i];
//     }
// }
// let findResult = animals.find2(function(animal){
// 	return animal === 'Dog';
// });

// console.log(findResult)

// fillter 
Array.prototype.fillter2 = function(callBack) {
    var arrLength = this.length;
    var output;
    var arr = [];
    for (let i = 0; i < arrLength; i++) {
        output = callBack(this[i], i);
        if (output) arr.push(this[i]);
    }
    return arr;
}

var array = animals.fillter2((animal, index) => {
    return animal === 'Dog';
})
console.log(array);
