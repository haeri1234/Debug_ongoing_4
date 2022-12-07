#include "SecondHandArticleView.h"

using namespace std;

namespace TP {
	SecondHandArticleView::SecondHandArticleView() {

	};

	// 게시글 코드 입력받으면 해당 글 찾기
	void SecondHandArticleView::secondHandArticleToken(string articleData, int code) {

		struct SecondHandData shData;
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
				shData.SecondHandCode = y[0];
				shData.SecondHandTitle = y[1];
				shData.SecondHandLocation = y[2];
				shData.SecondHandPrice = y[3];
				shData.SecondHandUserName = y[4];
				shData.SecondHandContent = y[5];
				shData.SecondHandChatNum = y[6];
				shData.SecondHandLikeNum = y[7];
				shData.SecondHandWritingTime = y[8];
			}
		}
		this->shData = shData;
		this->result = "제목: "+shData.SecondHandTitle+"\n"
								+	"동네: " + shData.SecondHandLocation + "\n"
								+ "가격: " + shData.SecondHandPrice + "원\n"
								+ "아이디: " + shData.SecondHandUserName + "\n"
								+ "내용: " + shData.SecondHandContent + "\n"
								+ "채팅 수: " + shData.SecondHandChatNum + "\n"
								+ "좋아요: " + shData.SecondHandLikeNum + "\n"
								+ "날짜: " + shData.SecondHandWritingTime + "\n";
	}

	// 저장된  결과 전달하기
	string SecondHandArticleView::get_SecondHandArticleView() const {
		return this->result;
	}

	// 나머지 개별 정보 전달
	string SecondHandArticleView::loadSecondHandPrice() {
		return this->shData.SecondHandPrice;
	}
	string SecondHandArticleView::loadSecondHandTitle() {
		return this->shData.SecondHandTitle;
	}
	string SecondHandArticleView::loadSecondHandUserName() {
		return this->shData.SecondHandUserName;
	}
	string SecondHandArticleView::loadSecondHandLocation() {
		return this->shData.SecondHandLocation;
	}
	string SecondHandArticleView::loadSecondHandContent() {
		return this->shData.SecondHandContent;
	}
}