#include "pch.h"
#include "..//v1.5/Studentas.h"
#include "..//v1.5/generavimas.h"
#include "..//v1.5/skaic.h"
#include "..//v1.5/studentas.cpp"
#include "..//v1.5/skaic.cpp"
#include "..//v1.5/generavimas.cpp"
#include "..//v1.5/zmogus.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
TEST(studentasTest, VardasTest)
{
	//Studentas studentas;
	string vardas = "Vardenis";
	Studentas studentas(vardas, "");
	//studentas.setName(vardas);
	EXPECT_EQ(studentas.getVardas(), "Vardenis");
}
TEST(studentasTest, egzaminasTest)
{
	string vardas = "Vardenis";
	string pavarde = "Pavarde";
	Studentas s(vardas, pavarde);
	//s.setName(vardas);
	//s.setSurname(pavarde);
	int x = 5;
	s.setEgz(x);
	EXPECT_EQ(s.getEgz(), 5);
}
TEST(studentasTest, vidurkisTest)
{
	string vardas = "Vardenis";
	string pavarde = "Pavarde";
	Studentas s(vardas, pavarde);
	//s.setName(vardas);
	//s.setSurname(pavarde);
	int paz;
	for (int i = 0; i < 10; i++)
	{
		s.setMark(10);
	}
	s.setEgz(10);
	s.setResult(Vidurkis(s.getMarks()));
	double ats = s.getResult() * 0.4 + s.getEgz() * 0.6;
	EXPECT_EQ(ats, 10);
}