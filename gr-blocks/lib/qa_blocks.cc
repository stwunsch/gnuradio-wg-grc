/*
 * Copyright 2012-2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/*
 * This class gathers together all the test cases for the gr-blocks
 * directory into a single test suite.  As you create new test cases,
 * add them here.
 */

#include <qa_blocks.h>
#include <qa_block_tags.h>
#include <qa_fxpt.h>
#include <qa_fxpt_nco.h>
#include <qa_fxpt_vco.h>
#include <qa_rotator.h>

CppUnit::TestSuite *
qa_gr_blocks::suite()
{
  CppUnit::TestSuite *s = new CppUnit::TestSuite("gr-blocks");

  s->addTest(qa_block_tags::suite());
  s->addTest(qa_fxpt::suite());
  s->addTest(qa_fxpt_nco::suite());
  s->addTest(qa_fxpt_vco::suite());
  s->addTest(qa_rotator::suite());

  return s;
}