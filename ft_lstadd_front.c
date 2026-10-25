#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
	
}
/*int main ()
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	new = ft_lstnew("X");
	ft_lstadd_front(&head, new);
	printf("%s\n",(char *) head -> content);
}*/
