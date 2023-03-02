void append(int roll)
{
	if(root==NULL) //If the list is empty
	{
		root=new node(); //create new node in root
		root->roll=roll;
       root->next=NULL;
	}
}
