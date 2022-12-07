#include "LifeQueListView.h"
namespace TP {
	LifeQueListView::LifeQueListView() {

	};

	void LifeQueListView::lifeQueListToken(string articleData) {

		struct LifeQueData lqData;
		LifeQueData lqListData[10];
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
			lqData.LifeQueListCode = y[0];
			lqData.LifeQueListTitle = y[1];
			lqData.LifeQueListLocation = y[2];
			lqData.LifeQueListUserName = y[3];
			lqData.LifeQueListContent = y[4];
			lqData.LifeQueListCuriousNum = y[5];
			lqData.LifeQueListCommentNum= y[6];
			lqListData[num++] = lqData;
		}
		string result = "번호\t제목\t유저\t지역\t궁금해요\n";
		result.append(lqData.LifeQueListCode + "\t"
			+ lqData.LifeQueListUserName + "\t"
			+ lqData.LifeQueListLocation + "\t"
			+ lqData.LifeQueListCuriousNum + "\t\n");
		this->LifeQueListData = lqListData;
		this->result = result;
	}

	// 정리된 결과 전달
	string LifeQueListView::get_LifeQueListView() {
		return this->result;
	}

	// 나머지 개별 정보 전달
	string LifeQueListView::loadLifeQueTitle() {
		return this->LifeQueListData->LifeQueListTitle;
	}
	string LifeQueListView::loadLifeQueUserName() {
		return this->LifeQueListData->LifeQueListUserName;
	}
	string LifeQueListView::loadLifeQueLocation() {
		return this->LifeQueListData->LifeQueListLocation;
	}
	string LifeQueListView::loadLifeQueCuriousNum() {
		return this->LifeQueListData->LifeQueListCuriousNum;
	}
}