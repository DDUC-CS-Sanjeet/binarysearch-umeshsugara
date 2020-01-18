#include<iostream>
#include<algorithm>
using namespace std;

bool binaryserchRecursive(int* array,int startIndex,int lastIndex,int element)
    {
       if(lastIndex>=startIndex)	
           {
           	int mid=(startIndex+lastIndex)/2;
           	    
           	    	if(array[mid]==element)
           	    	{
					  cout<<"\nthe given number exists ";
           	    	  return true;
           	        }
           	    	else if(array[mid]>element)
           	    	   return  binaryserchRecursive(array,startIndex,mid-1,element);
			        
					else if (array[mid]<element)
			           return  binaryserchRecursive(array,mid+1,lastIndex,element);
		    }
	return false;
	}
	

bool binaryserchIterative(int* array,int startIndex,int lastIndex,int element)
    {
    	while (startIndex<=lastIndex)
    	      {
    	      	int mid=(startIndex+lastIndex)/2;
    	      	    if(array[mid]==element)
    	      	      {
					  cout<<"\nthe given number exists ";
    	      	      return true;
    	      	      }
    	      	    else if(array[mid]<element)
    	      	         startIndex=mid+1;
    	      	    else if (array[mid]>element)
    	      	         lastIndex=mid+1;
			  }
	return false;
	}
int main()
    {
    	int n,search,choice;
    	bool position;
    	cout<<"Give the number of terms in array : ";
    	cin>>n;
    	int array[n];
    	cout<<"Enter the elements of array : \n";
    	for(int temp=0;temp<n;temp++)
    	   {
    	   	cin>>array[temp];
		   }
    	n = sizeof(array)/sizeof(array[0]); 

	    sort(array, array+n); 

	    cout << "\nArray after sorting using default sort is : \n"; 
	    for (int i = 0; i < n; ++i) 
	    	cout << array[i] << " "; 
	    cout<<"\n enter the element which you want to search : ";
	    cin>> search;
	    

        cout<<"\n__________________MENU______________________________\n";
        cout<<"\n Please choose any of the following \n";
        cout<<"1:: Binary Search by Recursion \n";
        cout<<"2:: Binary Search by Iteration \n";
        cout<<"please give your choice\n";
        cin>>choice;
	    switch( choice)
	          {
	          	case 1:cout<<"\nYOUR CHOICE:: Binary Search by Recursion ";
	          	        position=binaryserchRecursive(array,0,n-1,search);
	                   if(!position)
	                   cout<<"\nthe term not exists \n ";
                        
	            break;
	          	case 2:cout<<"\nYOUR CHOICE:: Binary Search by Iteration ";
	          	       position=binaryserchIterative(array,0,n-1,search);
	                   if(!position)
					   cout<<"\nthe term not exists \n ";
	          	break;
	          	default:cout<<"\nyou made a wrong choice\n";
			  }
	cout<<"\n_____________________PROGRAM ENDS HERE____________________\n";
		   return 0;
	}
