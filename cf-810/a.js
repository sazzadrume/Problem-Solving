var a = parseInt(readline());

for(var i = 0; i < a; i++){
	var n = parseInt(readline());

	var arr = [n];

	for(var j = 0; j < n; j++){
		var value = parseInt(readline());
		arr.push(value);
	}

	var ans = true;

	for(var j = 1; j < n; j++){
		if(arr[j] % arr[0] != 0){
			ans = false;
			break;
		}
	}

	if(ans){
		println("YES");
	}
	else{
		println("NO");
	}
}