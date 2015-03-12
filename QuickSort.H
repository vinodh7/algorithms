#include <iostream>

namespace vmalgorithms{
  template<typename IterType, typename Cmp = std::less<std::iterator_traits<IterType>::value_Type> >
  	inline void quickSort(IterType begin, IterType end, Cmp cmp = Cmp())
  	{
  		if(std::difference(begin,end) > 1 )
  		{
  			auto beginEndPair = quickSortHelper(begin,end,cmp);
  			quickSort(begin,beginEndPair.first,cmp);
  			quickSort(beginEndPair.second,end,cmp);
  		}
  	}
  	
  	template<typename T,typename Cmp>
  	inline T getMedian(T const &n1, T const &n2, T const &n3, Cmp cmp)
  	{
  		if (cmp(n1,n2))
  		{
  			if(cmp(n2,n3))
  			{ 
  				return n2;
  			}
  			else if (cmp(n1,n3))
  			{
  				return n3
  			}
  			else
  				return n1;
  		}
  		else if(cmp(n1,n3)
  		{
  			return n1;
  		}
  		else if(cmp(n2,n3))
  		{
  			return n3;
  		}
  		else
  			return n1;
  	}
  	
  	template<typename IterType, typename Cmp>
  	inline std::pair<IterType,IterType> quickSortHelper(IterType begin,IterType end,Cmp cmp)
  	{
  		using notCmp = [&cmp](std::iterator_traits<IterType>::value_type lhs,std::iterator_traits<IterType>::value_type rhs){return not cmp(lhs,rhs);};
  		auto const pivot 	= getMedian(*begin,*(std::next(begin,std::distance(begin+end)/2)),*end)
  		auto const lowPart	= std::partition(begin,end,std::bind(cmp,_1,pivot));
  		auto const highPart = std::partition(lowPart,end,std::bind(notCmp,_1,pivot));
  		return std::make_pair(lowPart,highPart);
  	}
}
