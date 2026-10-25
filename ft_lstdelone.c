#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	del(void *content)
{
	free(content);
}
int main()
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = ft_lstnew(ft_strdup("k"));
	lst2 = ft_lstnew(ft_strdup("l"));
	lst1->next = lst2;
	ft_lstdelone(lst2, del);
	printf("%s\n", (char *) lst1->content);
	printf("%s\n", (char *) lst1->next->content);
}*/
