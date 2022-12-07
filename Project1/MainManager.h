#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

//#include "command.h"
#include "ViewManager.h"
#include "DomainManager.h"

using namespace std;

namespace TP {
	class MainManager
	{
	private:

		string articleData; //[10]
		string listData; //[10][10]
		ACTION_KEY actionKey;
		string inputCommand;
		string inputData;

		ViewManager viewManager;
		DomainManager domainManager;

	public:
		MainManager();
		~MainManager();

		void TextToStruct(string category);

		void triggerLoadListView();
		void triggerLoadArticleView();

		void triggerLoadListDomain();
		void triggerLoadArticleDomain();

	};
}

