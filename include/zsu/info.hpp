// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

/// ZSU file info
///
/// \file   zsu/info.hpp
/// \author Vincent Hamp
/// \date   26/10/2023

#pragma once

#include <string>

namespace zsu {

/// ZSU file info
struct Info {
  std::string id;
  int version{};
};

}  // namespace zsu