// Copyright 2020 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.

#include <iostream>

#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/screen.hpp"

int main(int argc, const char* argv[]) {
  using namespace ftxui;
  auto document =  //
      vbox({
          hbox({
              text(L"north-west"),
              filler(),
              text(L"north-east"),
          }),
          filler(),
          hbox({
              filler(),
              text(L"center"),
              filler(),
          }),
          filler(),
          hbox({
              text(L"south-west"),
              filler(),
              text(L"south-east"),
          }),
      });
  auto screen = Screen::Create(Dimension::Full());
  Render(screen, document);

  std::cout << screen.ToString();
  getchar();

  return 0;
}
