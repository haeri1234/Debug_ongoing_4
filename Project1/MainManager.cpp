#include "MainManager.h"

using namespace std;

namespace TP
{
	struct listData {
		string listTitle;
		string listLocation;
		string listGoodsPrice;
		string listInterestNum; 
	};

	/*텍스트 파일 형식 article을 벡터에 저장*/
	void MainManager::TextToStruct(string category) {
	
		locale::global(locale(".UTF-8"));
		
		// 읽은 텍스트파일 저장할 문자열
		string saveData;
		string str;
		ifstream ifile(category + ".txt");

		if (ifile.is_open())
		{
			int num = 0;
			while (getline(ifile, str)) // 한 줄씩 읽어 처리를 시작한다.
			{
				saveData.append(str);
			}
		}

		ifile.close(); // 파일 닫기

		// 전송


	}


	void MainManager::triggerLoadListView() {
		viewManager.listView(this->listData, this->actionKey);
		this->inputCommand = viewManager.userInputCommand(this->actionKey);
		this->inputData = viewManager.userInputValue();
	};

	void MainManager::triggerLoadArticleView() {
		viewManager.articleView(this->articleData, this->actionKey);
		this->inputCommand = viewManager.userInputCommand(this->actionKey);
		this->inputData = viewManager.userInputValue();
	};

	void MainManager::triggerLoadListDomain() {
		domainManager.loadListData(this->actionKey);
	};

	void MainManager::triggerLoadArticleDomain() {
		domainManager.loadArticleData(this->actionKey);
	};
}