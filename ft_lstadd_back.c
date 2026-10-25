#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node -> next = new;
}
/*
int main()
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;

	lst1 = ft_lstnew("j");
	lst2 = ft_lstnew("p");
	new = ft_lstnew("x");
	lst1->next = lst2;
	ft_lstadd_back(&lst1, new);
	printf("%s\n", (char *) lst1->next->next->content);
}*/
