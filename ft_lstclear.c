#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current -> next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
/*void	del(void *content)
{
	free(content);
}
int main()
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = ft_lstnew(ft_strdup("h"));
	lst2 = ft_lstnew(ft_strdup("j"));
	printf("%s\n",(char *) lst1->content);
	printf("%s\n", (char *)lst2->content);
	ft_lstclear(&lst1, del);
	printf("%p\n", lst1->content);
	printf("%p\n", lst2->content);
}*/
