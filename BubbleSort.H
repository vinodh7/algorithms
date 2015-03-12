#include <iostream>

namespace vmalogrithms
{
	template<typename IterType, typename Cmp = std::less<std::iterator_traits<IterType>::value_type> >
	inline void bubbleSort(IterType begin, IterType end, Cmp cmp= Cmp())
	{
		if(std::distance(begin,end) < 1)
		{
			return;
		}
		bool elementSwapped = true;
		IterType lastButOne = std::prev(end,1);
		while(not elementSwapped)
		{
			for(IterType currIter = begin, currIter != lastButOne; ++currIter)
			{
				IterType next = std::next(currIter,1)
				if(Cmp(*currIter,*next))
				{
					std::swap(*currIter,*next);
					elementSwapped = true;
				}
			}
		}
	}
}
