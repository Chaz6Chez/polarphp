// This source file is part of the polarphp.org open source project
//
// Copyright (c) 2017 - 2018 polarphp software foundation
// Copyright (c) 2017 - 2018 zzu_softboy <zzu_softboy@163.com>
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://polarphp.org/LICENSE.txt for license information
// See http://polarphp.org/CONTRIBUTORS.txt for the list of polarphp project authors
//
// Created by polarboy on 2018/09/04.

#include "ShellUtil.h"

namespace polar {
namespace lit {

//ShLexer::ShLexer(const std::vector<char> &data, bool win32Escapes)
//   : m_data(data),
//     m_pos(0),
//     m_end(data.size()),
//     m_win32Escapes(win32Escapes)
//{}

//char ShLexer::eat()
//{
//   char c = m_data[m_pos];
//   ++m_pos;
//   return c;
//}

bool ShLexer::maybeEat(char c)
{
   if (m_data[m_pos] == c){
      ++m_pos;
      return true;
   }
   return false;
}

} // lit
} // polar
