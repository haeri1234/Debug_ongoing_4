#include "LifeQueArticleView.h"
namespace TP {
	LifeQueArticleView::LifeQueArticleView() {

	};

	// 게시글 코드 입력받으면 해당 글 찾기
	void LifeQueArticleView::lifeQueArticleToken(string articleData, int code) {

		struct LifeQueData lqData;
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
			// 찾는 게시글 코드와 일치하는 부분만 저장
			if (y[0] == to_string(code)) {
				lqData.LifeQueCode = y[0];
				lqData.LifeQueTitle = y[1];
				lqData.LifeQueLocation = y[2];
				lqData.LifeQueUserName = y[3];
				lqData.LifeQueContent = y[4];
				lqData.LifeQueCuriousNum = y[5];
				lqData.LifeQueCommentNum = y[6];
			}
		}
		this->lqData = lqData;
		this->result = "제목: " + lqData.LifeQueTitle + "\n"
			+ "동네: " + lqData.LifeQueLocation + "\n"
			+ "아이디: " + lqData.LifeQueUserName + "\n"
			+ "내용: " + lqData.LifeQueContent + "\n"
			+ "궁금해요: " + lqData.LifeQueCuriousNum + "개\n"
			+ "댓글: " + lqData.LifeQueCommentNum + "개\n";
	}

	// 저장된  결과 전달하기
	string LifeQueArticleView::get_LifeQueArticleView() const {
		return this->result;
	}

	// 나머지 개별정보 전달
	string LifeQueArticleView::loadLifeQueTitle() {
		return this->lqData.LifeQueTitle;
	}
	string LifeQueArticleView::loadLifeQueUserName() {
		return this->lqData.LifeQueUserName;
	}
	string LifeQueArticleView::loadLifeQueLocation() {
		return this->lqData.LifeQueLocation;
	}
	string LifeQueArticleView::loadLifeQueContent() {
		return this->lqData.LifeQueContent;
	}
	string LifeQueArticleView::loadListQueCuriousNum() {
		return this->lqData.LifeQueCuriousNum;
	}
}