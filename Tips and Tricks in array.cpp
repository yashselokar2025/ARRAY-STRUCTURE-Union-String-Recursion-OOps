//Tips and tricks in array
	// !st) shift elements to the left
                for(k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;     // reduce array size
                j--;  
////swapping
temp = a;
a = b;
b = temp;
                
