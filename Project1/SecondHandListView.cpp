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
		// 1차 구분자 ,
		while (getline(ss, firstStringBuffer, ',')) {
			x.push_back(firstStringBuffer);
		}

		// 2차 구분자 /
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
		string result = "번호\t제목\t유저명\t가격\t지역\n";
		result.append(shData.SecondHandListCode + "\t"
									+ shData.SecondHandListTitle + "\t"
									+	shData.SecondHandListUserName + "\t"
									+ shData.SecondHandListPrice + "\t"
									+ shData.SecondHandListLocation + "\t\n"	);
		this->SecondHandListData = shListData;
		this->result = result;
	}

	// 정리된 결과 전달
	string SecondHandListView::get_SecondHandListView() {
		return this->result;
	}

	// 나머지 개별 정보 전달
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