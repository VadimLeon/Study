#include "Test_Polinomes\includes\polinom.h"
#include <ConsoleApplication1\gtest.h>

TEST(polinom, can_create_polinom)
{
	ASSERT_NO_THROW(polinom a);
}

TEST(polinom, can_copy_polinom)
{
	polinom a;
	ASSERT_NO_THROW(polinom b(a));
}

TEST(polinom, can_copy_polinom_with_monoms)
{
	polinom a;
	a.add();
	polinom b(a);
	EXPECT_TRUE(a==b);
}

TEST(polinom, can_create_polinom_with_select_ch)
{
	ASSERT_NO_THROW(polinom a(20));
}

TEST(polinom, cant_create_polinom_with_negative_ch)
{
	ASSERT_ANY_THROW(polinom a(-5));
}

TEST(polinom, cant_create_polinom_with_null_ch)
{
	ASSERT_ANY_THROW(polinom a(0));
}


TEST(polinom, polinom_eq)
{
	polinom a(20);
	EXPECT_TRUE(a==a);
}

TEST(polinom, can_eq_polinoms_with_eq_adder_monom)
{
	polinom a;
	polinom b;

	a.add(3,1,2,3);
	b.add(3,1,2,3);

	EXPECT_TRUE(a==b);
}

TEST(polinom, can_eq_polinoms_with_eq_adder_monoms)
{
	polinom a;
	polinom b;

	a.add();
	a.add(3,1,2,3);
	a.add(5,3,2,1);
	a.add();

	b.add();
	b.add(3,1,2,3);
	b.add(2,3,2,1);
	b.add(3,3,2,1);
	b.add();

	EXPECT_TRUE(a==b);
}

TEST(polinom, polinoms_not_eq)
{
	polinom a(20);
	a.add(25,2,5,3);
	polinom b(20);
	b.add(33,2,6,4);
	EXPECT_FALSE(a==b);
}

TEST(polinom, polinoms_noteq_with_noteq_sisch)
{
	polinom a(20);
	polinom b(15);
	EXPECT_FALSE(a==b);
}

TEST(polinom, can_add_polinom)
{
	polinom a(20);
	ASSERT_NO_THROW(a.add());
}

TEST(polinom, can_add_more_polinoms)
{
	polinom a(20);
	a.add(4,8,2,6);
	ASSERT_NO_THROW(a.add(7,3,3,3));
}

TEST(polinom, can_add_more_polinoms_2)
{
	polinom a(20);
	a.add(4,8,2,6);
	ASSERT_NO_THROW(a.add(7,9,9,9));
}

TEST(polinom, can_add_eq_polinoms)
{
	polinom a;
	a.add(3,6,2,5);
	ASSERT_NO_THROW(a.add(5,6,2,5));
}

TEST(polinom, can_delete_null_monom)
{
	polinom a;
	a.add(3,6,2,5);
	ASSERT_NO_THROW(a.add(-3,6,2,5));
}

TEST(polinom, add_more_more_polinoms)
{
	polinom a;
	a.add(1,1,2,3);
	a.add(2,1,2,3);
	a.add(5,6,7,2);
	ASSERT_NO_THROW(a.add(2,1,2,3));
}

TEST(polinom, can_delete_monom)
{
	polinom a;
	a.add(3,2,2,2);
	ASSERT_NO_THROW(a.del(2+2*a.sisch+2*a.sisch*a.sisch));
}

TEST(polinom, can_delete_monom_eq)
{
	polinom a;
	polinom b;
	b.add(3,1,0,0);
	b.del(1);
	EXPECT_TRUE(a==b);
}

TEST(polinom, eq_eq_polinoms)
{
	polinom a(15);
	polinom b;
	a=b;
	EXPECT_TRUE(a==b);
}

TEST(polinom, can_plus_polinoms)
{
	polinom a;
	polinom b;
	b.add(1,2,5,3);
	a.add(3,5,3,7);
	ASSERT_NO_THROW(a+=b);
}

TEST(polinom, eq_null_coord_polinoms)
{
	polinom a,pr;

	a.add(2);
	a.add(3);
	pr.add(5);
	EXPECT_TRUE(a==pr);
}
	

TEST(polinom, can_sum_monoms)

{
	polinom a(20);
	polinom b(20), pr(20);
	a.add(2,1,1,1);
	b.add(3,1,1,1);
	pr.add(5,1,1,1);
	polinom pr2(20);
	pr2=(a+=b);
	ASSERT_TRUE(pr==pr2);
}

TEST(polinom, eq_plus_polinoms)
{
	polinom a,b,c,pr;

	a.add(1,2,4,5);
	a.add(3,5,7,9);
	a.add(5,2,1,7);

	b.add(2,2,4,5);
	b.add(10,1,6,2);

    pr.add(3,2,4,5);
	pr.add(3,5,7,9);
	pr.add(5,2,1,7);
	pr.add(10,1,6,2);

	EXPECT_TRUE(pr==(a+=b));
}

TEST(polinom, can_use_minus)
{
	polinom a(20),b(20);
	a.add(3,2,5,3);
	b.add(5,2,6,6);
	ASSERT_NO_THROW(a-=b);
}

TEST(polinom, can_correctly_use_minus)
{
	polinom a, b, pr;
	a.add(5);
	b.add(3);
	pr.add(2);
	EXPECT_TRUE(pr==(a-=b));
}

TEST(polinom, can_use_mult)
{
	polinom a,b;
	ASSERT_NO_THROW(a*=b);
}

TEST(polinom, can_correctly_mult)
{
	polinom a,b,pr;
	a.add(3,1,2,3);
	b.add(4,3,2,1);
	pr.add(12,4,4,4);
	EXPECT_TRUE(pr==(a*=b));
}

TEST(polinom, can_use_mult_with_null)
{
	polinom a,b;
	a.add(3,6,3,4);
	EXPECT_TRUE(b==(a*=b));
}

TEST(polinom, cant_mult_with_dif_sch)
{
	polinom a(15),b(20);
	ASSERT_ANY_THROW(a*=b);
}

TEST(polinom, cant_minus_with_dif_sch)
{
	polinom a(15),b(20);
}

TEST(polinom, cant_delete_if_non_something)
{
	polinom a;
	ASSERT_ANY_THROW(a.delfrst());
}

TEST(polinom, can_continium_without_used_monom)
{
	polinom a;
	ASSERT_NO_THROW(a.del(45));
}

TEST(polinom,can_res_correctly)
{
	polinom a;
	a.add(3,2,2,2);
	EXPECT_TRUE(12.0==a.resh(1.0,2.0,1.0));
}

TEST(polinom, can_res_null_polinom)
{
	polinom a;
	EXPECT_TRUE(0==a.resh(1.,2.0,3.0));
}

TEST(polinom, can_summ)
{
	polinom a,b;
	polinom pl;
	a.add();
	b.add();
	pl.add(2);
	EXPECT_TRUE(pl==(a+b));
}

TEST(polinom, can_summ_correctly)
{
	polinom a,b;
	a.add(1,2,3,4);
	b.add(4,5,6,7);
	EXPECT_TRUE((a+b)==(b+a));
}

TEST(polinom, can_minus)
{
	polinom a,b, pl;
	a.add();
	b.add();
	EXPECT_TRUE(pl==(a-b));
}

TEST(polinom, can_minus_correctly)
{
	polinom a,b;
	a.add(1,2,3,4);
	b.add(4,3,2,1);
	EXPECT_FALSE((a-b)==(b-a));
}

TEST(polinom, can_mult)
{
	polinom a,b,pl;
	a.add(3,1,2,3);
	a.add(2,3,2,1);
	b.add(3,1,1,1);
	b.add(2,2,2,2);
	pl.add(9,2,3,4);
	pl.add(6,3,4,5);
	pl.add(6,4,3,2);
	pl.add(4,5,4,3);
	EXPECT_TRUE(pl==(a*b));
}

TEST(polinom, can_mult_with_null)
{
	polinom a,pl;
	a.add(4,6,3,4);
	EXPECT_TRUE(pl==(pl*a));
}

TEST(polinom, can_mult_correctly)
{
	polinom a,b;
	a.add(3,4,1,5);
	a.add(1,5,7,1);
	b.add(5,2,3,6);
	b.add(2,6,3,1);
	EXPECT_TRUE((a*b)==(b*a));
}



//TEST(def, can_pow)
//{
//	EXPECT_EQ(25,5*5);
//}