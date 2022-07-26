var a = parseInt(readline());

for(var i = 0; i < a; i++){
	var n = parseInt(readline());

	var arr = [n];

	for(var j = 1; j < n; j++){
		arr.push(j);
	}

	print(arr.join(' '));
}