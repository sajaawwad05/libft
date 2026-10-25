#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*void	*return_content(void *content)
{
	return ((void *) ft_strdup((char *) content));
}
void	del(void *content)
{
	free(content);
}
int main()
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new_list;

	lst1 = ft_lstnew(("k"));
	lst2 = ft_lstnew(("o"));
	lst1->next = lst2;
	new_list = ft_lstmap(lst1, return_content, del);
	printf("%s\n",(char *)new_list->content);
}
*/
