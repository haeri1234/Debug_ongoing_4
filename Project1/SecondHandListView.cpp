#include "SecondHandListView.h"

using namespace std;

namespace TP {
	SecondHandListView::SecondHandListView() {

	};

	void SecondHandListView::secondHandListToken(string articleData) {

		struct SecondHandData shData;
		SecondHandData shListData[10];
		istringstream ss(articleData);
		string firstStringBuffer;
		vector<string> x;
		x.clear();
		// 1�� ������ ,
		while (getline(ss, firstStringBuffer, ',')) {
			x.push_back(firstStringBuffer);
		}

		// 2�� ������ /
		int num = 0;
		for (string data : x) {
			istringstream ss(data);
			string stringBuffer;
			vector<string> y;
			y.clear();
			while (getline(ss, stringBuffer, '/')) {
				y.push_back(stringBuffer);
			}
			shData.SecondHandListCode = y[0];
			shData.SecondHandListTitle = y[1];
			shData.SecondHandListLocation = y[2];
			shData.SecondHandListPrice = y[3];
			shData.SecondHandListUserName = y[4];
			shData.SecondHandListContent = y[5];
			shData.SecondHandListChatNum = y[6];
			shData.SecondHandListLikeNum = y[7];
			shData.SecondHandListWritingTime = y[8];
			shListData[num++] = shData;
		}
		string result = "��ȣ\t����\t������\t����\t����\n";
		result.append(shData.SecondHandListCode + "\t"
									+ shData.SecondHandListTitle + "\t"
									+	shData.SecondHandListUserName + "\t"
									+ shData.SecondHandListPrice + "\t"
									+ shData.SecondHandListLocation + "\t\n"	);
		this->SecondHandListData = shListData;
		this->result = result;
	}

	// ������ ��� ����
	string SecondHandListView::get_SecondHandListView() {
		return this->result;
	}

	// ������ ���� ���� ����
	string SecondHandListView::loadSecondHandPrice() {
		return this->SecondHandListData->SecondHandListPrice;
	}
	string SecondHandListView::loadSecondHandTitle() {
		return this->SecondHandListData->SecondHandListTitle;
	}
	string SecondHandListView::loadSecondHandUserNum() {
		return this->SecondHandListData->SecondHandListUserName;
	}
	string SecondHandListView::loadSecondHandLocation() {
		return this->SecondHandListData->SecondHandListLocation;
	}
	string SecondHandListView::loadSecondHandContent() {
		return this->SecondHandListData->SecondHandListContent;
	}
}