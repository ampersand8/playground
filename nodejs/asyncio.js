var fs = require('fs');
console.log(fs.readFile(process.argv[2],).toString().split('\n').length - 1);
