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

	/*�ؽ�Ʈ ���� ���� article�� ���Ϳ� ����*/
	void MainManager::TextToStruct(string category) {
	
		locale::global(locale(".UTF-8"));
		
		// ���� �ؽ�Ʈ���� ������ ���ڿ�
		string saveData;
		string str;
		ifstream ifile(category + ".txt");

		if (ifile.is_open())
		{
			int num = 0;
			while (getline(ifile, str)) // �� �پ� �о� ó���� �����Ѵ�.
			{
				saveData.append(str);
			}
		}

		ifile.close(); // ���� �ݱ�

		// ����


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