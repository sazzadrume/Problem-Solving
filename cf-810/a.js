var a = parseInt(readline());

for(var i = 0; i < a; i++){
	var n = parseInt(readline());

	var arr = [n];

	// arr.push(n);

	for(var j = 1; j < n; j++){
		arr.push(j);
	}

	// arr.push(1);

	// if(n === 1){
	// 	print(1);
	// }
	// else{
	// 	print(arr.join(' '));
	// }

	print(arr.join(' '));
}