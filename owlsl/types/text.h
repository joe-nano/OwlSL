/*
OwlSL (Owl Script Language)

Copyright (c) 2013-2014 Damian Reloaded <>

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef owl_script_text_H
#define owl_script_text_H

#include "../_export.h"

namespace owlsl {
	class vm;
	class sco;
namespace type {

	class OWL_SCRIPT text : public owlsl::dllnew
	{
		public:
						text		();
			virtual		~text		();

			static void	inscribe	(owlsl::sco* sco);

			///////////////////////////////////////////////////////////////
			// Script Interface Methods
			///////////////////////////////////////////////////////////////
			static void script_set(owlsl::vm* vm);
			static void script_equal(owlsl::vm* vm);
			static void script_add(owlsl::vm* vm);
			static void script_add_set(owlsl::vm* vm);
			static void script_add_number(owlsl::vm* vm);
	};

}}

#endif // owl_script_text_H