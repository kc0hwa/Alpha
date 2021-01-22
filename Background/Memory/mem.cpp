namespace LL {
	namespace SLL {
		template <Type T>
		struct SSL {
			T Data;
			SSL& next;

		};
	};

	namespace DLL {
		template <Type T>
		struct DDL {
			T Data;
			DDL& next;
			DDL& pre;
		};
	};
};

namespace tree {
	namespace binLH {
		template <Type T>
		struct TLH {
			T data;
			TLH* Lower;
			TLH* Higher;
		};


	};
	namespace  binLUH{
		template <Type T>
		struct TLUH {
			T data;
			TLUH* Lower;
			TLUH* Up;
			TLUH* Higher;
		};

	};
	namespace  binLUHDDL {
		template <Type T>
		struct TLUHDDL {
			T data;
			TLUHDDL* Lower;
			TLUHDDL* Up;
			TLUHDDL* Higher;
			TLUHDDL* Next;
			TLUHDDL* Pre;
		};

	};
};


