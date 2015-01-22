/*
 * Copyright (c) 2014 Eran Pe'er.
 *
 * This program is made available under the terms of the MIT License.
 *
 * Created on Mar 10, 2014
 */

#ifndef DomainObjects_h__
#define DomainObjects_h__

#include <string>

namespace fakeit {

	struct Method {
		Method() = default;
		virtual ~Method() = default;
		virtual std::string name() const = 0;
	};

	struct FakeitContext;

	namespace internal {

		template<typename C>
		struct MockObject {
			virtual ~MockObject() = default;
			virtual C & get() = 0;
			virtual FakeitContext & getFakeIt() = 0;
		};
	}
}

#endif // DomainObjects_h__
