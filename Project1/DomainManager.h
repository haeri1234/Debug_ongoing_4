#pragma once
#include <string>
#include <istream>
#include <ostream>

#include "command.h"
#include "SecondHandArticleLoad.h"
#include "LifeQueArticleLoad.h"
#include "SecondHandListLoad.h"
#include "LifeQueListLoad.h"

namespace TP
{
	class DomainManager
	{
	private:
	public:
		DomainManager();
		~DomainManager();

		void loadListData(ACTION_KEY actKey);
		void loadArticleData(ACTION_KEY actKey);
	};
}

