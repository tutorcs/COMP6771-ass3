https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "gdwg/graph.hpp"

#include <catch2/catch.hpp>

TEST_CASE("basic test") {
	// This will not compile straight away
	auto g = gdwg::graph<int, std::string>{};
	auto n = 5;
	g.insert_node(n);
	CHECK(g.is_node(n));
}
