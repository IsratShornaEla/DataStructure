void print()
{
		node *current_node=root;
		while(current_node!=NULL) //loop until you reach null
		{
			printf("%d\n",current_node->roll);
			current_node=current_node->next;
		}
}
int main(){

	append(1);
	append(2);
	append(6);
	printf();
    return 0;
}
