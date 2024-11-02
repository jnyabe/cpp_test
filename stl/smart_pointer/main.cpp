#include <iostream>
#include <memory>

class TestObject
{
private:
	int m_value;
public:
	TestObject(): m_value(0) {
		// std::cout << "# TestObject constructer" << std::endl;
	}
	TestObject(int value): m_value(value) {
		// std::cout << "# TestObject constructer" << std::endl;
	}
	virtual ~TestObject() {
		// std::cout << "# TestObject destructor" << std::endl;
	}

	void Dump() {
		std::cout << "# TestObject value is " << m_value << std::endl;
	}
};
	
void test_unique_ptr(void)
{
	// メモリの所有権はただ1つのインスタンスが保持する
	// 軽量・シンプル
	auto uptr = std::make_unique<TestObject>(1);
	uptr.get()->Dump();

	std::cout << (uptr? "uptr own":"uptr do not own")  << std::endl;


	// Cannot copy
	// auto uptr2 = uptr; // fail to copy !
	
	// Can move
	std::unique_ptr<TestObject> uptr2 = std::move(uptr); // move
	std::cout <<  "Move uptr to uptr2"  << std::endl;

	std::cout << '\t' << (uptr? "uptr own":"uptr do not own")  << std::endl;
	std::cout << '\t' << (uptr.get()? "uptr is not empty":"uptr is empty")  << std::endl;
	
	std::cout << '\t' << (uptr2? "uptr2 own":"uptr2 do not own")  << std::endl;
	std::cout << '\t' << (uptr2.get()? "uptr2 is not empty":"uptr2 is empty") << std::endl;

	
}

void test_shared_ptr(void)
{
	// メモリの所有権は複数のインスタンスが保持する
	// コピー可能だが、オーバーヘッドあり

	auto sptr = std::make_shared<TestObject>(2);
	sptr.get()->Dump();

	std::shared_ptr<TestObject> sptr2 = std::move(sptr); // move
	std::cout <<  "Move sptr to sptr2"  << std::endl;
	std::cout << '\t' <<(sptr? "sptr own":"sptr do not own")  << std::endl;
	std::cout << '\t' << (sptr.get()? "sptr is not empty":"sptr is empty")  << std::endl;
	std::cout << '\t' <<(sptr2? "sptr2 own":"sptr2 do not own")  << std::endl;
	std::cout << '\t' << (sptr2.get()? "sptr2 is not empty":"sptr2 is empty") << std::endl;
	
	sptr = sptr2; // copy
	std::cout <<  "Copy sptr2 to sptr"  << std::endl;
	std::cout << '\t' << (sptr.get()? "sptr is not empty":"sptr is empty")  << std::endl;
	std::cout << '\t' << (sptr2.get()? "sptr2 is not empty":"sptr2 is empty") << std::endl;

	std::cout << '\t' << (sptr? "sptr own":"sptr do not own")  << std::endl;
	std::cout << '\t' << (sptr2? "sptr2 own":"sptr2 do not own")  << std::endl;

	// 循環参照問題
	struct woman;
	struct man {
		std::string name;
		std::shared_ptr<woman> partner;
		man(std::string name_): name(name_), partner(nullptr) {}
		~man() { std::cout << name << "destructor" << std::endl;  }
	};
	
	struct woman {
		std::string name;
		std::shared_ptr<man> partner;
		woman(std::string name_): name(name_), partner(nullptr) {}
		~woman() { std::cout << name << "destructor" << std::endl;  }
	};

	auto AlicePtr= std::make_shared<woman>("Alice");
	auto BobPtr= std::make_shared<man>("Bob");

	AlicePtr.get()->partner = BobPtr;
	BobPtr.get()->partner = AlicePtr;
}

void test_weak_ptr(void)
{
	// 自身ではメモリの所有権は持たず、代わりにshared_ptrの持つメモリへの参照を
	// 保持します。

	auto sptr = std::make_shared<TestObject>(3);
	sptr.get()->Dump();

	// auto wprt = std::make_weak(sptr);

	// 循環参照問題
	struct woman;
	struct man {
		std::string name;
		std::weak_ptr<woman> partner;
		man(std::string name_): name(name_), partner(std::weak_ptr<woman>()) {}
		~man() { std::cout << name << " destructor" << std::endl;  }
	};
	
	struct woman {
		std::string name;
		std::weak_ptr<man> partner;
		woman(std::string name_): name(name_), partner(std::weak_ptr<man>()) {}
		~woman() { std::cout << name << " destructor" << std::endl;  }
	};

	auto AlicePtr= std::make_shared<woman>("Alice");
	auto BobPtr= std::make_shared<man>("Bob");

	AlicePtr.get()->partner = BobPtr;
	BobPtr.get()->partner = AlicePtr;	
}

int main()
{
	struct {
		const char* name;
		void (*func)(void);
	} testCases[] = {
		{ "Test Unique Pointer", test_unique_ptr},
		{ "Test Shared Pointer", test_shared_ptr},
		{ "Test Weak Pointer", test_weak_ptr},		
	};

	for(const auto& test: testCases)
	{
		printf("%s\n", test.name);
		test.func();
	}
	return 0;
}
