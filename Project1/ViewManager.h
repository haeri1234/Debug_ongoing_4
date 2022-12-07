#pragma once
#include <string>
#include <istream>
#include <ostream>

#include "command.h"
#include "SecondHandArticleView.h"
#include "SecondHandListView.h"
#include "LifeQueArticleView.h"
#include "LifeQueListView.h"


using namespace std;

namespace TP {
	class ViewManager
	{
	private:
		string userInputString;
		ACTION_KEY actionKey;

	public:
		ViewManager();
		~ViewManager();

		void listView(string newData, ACTION_KEY actKey);
		void articleView(string newData, ACTION_KEY actKey);
		string userInputCommand(ACTION_KEY actKey);
		string userInputValue();
	};
}

