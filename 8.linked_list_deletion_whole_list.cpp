
///funcion to delete whole list;
void delete_full_linked_list(node* head){
 	node* current=head;
	node* nextN=nullptr;

	while(current!=nullptr){
		nextN=current->next;
		delete current;

 		current=nextN;
 	}
	cout<<"whole list is deleted !!!!!";
}
