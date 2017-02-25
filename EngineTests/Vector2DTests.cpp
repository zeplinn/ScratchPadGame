#include <gtest\gtest.h>
#include <Vector2D.h>
using Math::Vector2D;
const static float p1 = 2, p2 = 11, p3 = 5, p4 = 7;
TEST(Vector2D, Constructor)
{
	Vector2D left(p1, p2);
	EXPECT_EQ(p1, left.x);
	EXPECT_EQ(p2, left.y);


}

TEST(Vector2D, VectorAddition)
{
	Vector2D left(p1, p2);
	
	Vector2D right(p3,p4);
	auto result1 = left + right;
	auto result2 = right + left;

	EXPECT_FLOAT_EQ(p1+p3,result1.x);
	EXPECT_FLOAT_EQ(p2+p4,result1.y);

	EXPECT_FLOAT_EQ(result1.x, result2.x);
	EXPECT_FLOAT_EQ(result1.y , result2.y);

}


TEST(Vector2D, ScalarMultiplication)
{
	Vector2D left(p3, p2);
	const float scalar1=2;
	const float scalar2 = 3;
	auto result1 = left * scalar1;
	auto result2 = scalar2 *left;

	EXPECT_FLOAT_EQ(p3*scalar1,result1.x);
	EXPECT_FLOAT_EQ(p2*scalar1,result1.y);

	EXPECT_FLOAT_EQ(p3*scalar2, result2.x);
	EXPECT_FLOAT_EQ(p2*scalar2, result2.y);
}