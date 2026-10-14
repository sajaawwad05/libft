#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current -> next;
		if (del)
			del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
