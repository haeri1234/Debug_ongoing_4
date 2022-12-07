#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//#include "MainManager.h"

using namespace std;

namespace TP {
	class LifeQueArticleView {
	private:
		// 동네질문 리스트 내용 구조체
		struct LifeQueData {
			string LifeQueCode;						// 게시글 번호
			string LifeQueTitle;						// 제목
			string LifeQueLocation;				// 장소
			string LifeQueUserName;			// 작성자
			string LifeQueContent;				// 내용
			string LifeQueCuriousNum;		// 궁금해요 수
			string LifeQueCommentNum;	// 댓글 수
		};
		LifeQueData lqData;

		string result = "해당 결과가 없습니다.";

	public:
		LifeQueArticleView();
		~LifeQueArticleView();

		// 받은 문자열로 중고거래 리스트 토큰화
		void lifeQueArticleToken(string, int);
		// 정리된 중고거래 리스트 데이터 전달
		string get_LifeQueArticleView() const;

		// 개별 정보를 받을 수 있는 함수
		string loadLifeQueTitle();
		string loadLifeQueUserName();
		string loadLifeQueLocation();
		string loadLifeQueContent();
		string loadListQueCuriousNum();
	};
}