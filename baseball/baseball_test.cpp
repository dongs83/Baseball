#include "gmock/gmock.h"
#include "baseball.cpp"
#include <stdexcept>

using namespace std;

TEST(BaseballGame, ThrowExceptionWhenINputLengthIsUnmached) {
	Baseball game;
	EXPECT_THROW(game.guess("12"), length_error);
}
TEST(BaseballGame, THrowExceptionWhenInvalidChar) {
	Baseball game;
	EXPECT_THROW(game.guess("12s"), invalid_argument);

}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}