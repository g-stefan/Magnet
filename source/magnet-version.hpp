//
// Magnet
//
// Copyright (c) 2020-2021 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef MAGNET_VERSION_HPP
#define MAGNET_VERSION_HPP

#define MAGNET_VERSION_ABCD                1,3,0,6
#define MAGNET_VERSION_STR                 "1.3.0"
#define MAGNET_VERSION_STR_BUILD           "6"
#define MAGNET_VERSION_STR_DATETIME        "2021-01-06 02:30:00"

#ifndef XYO_RC

namespace Magnet {
	namespace Version {
		const char *version();
		const char *build();
		const char *versionWithBuild();
		const char *datetime();
	};
};

#endif
#endif

