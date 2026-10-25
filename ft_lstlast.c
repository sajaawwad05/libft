#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;

	lst1 = ft_lstnew("k");
	lst2 = ft_lstnew("j");
	lst1->next = lst2;
	new = ft_lstlast(lst1);
	printf("%s\n", (char *) new->content);
}*/
