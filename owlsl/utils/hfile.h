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
#ifndef OWL_SCRIPT_hfile_H
#define OWL_SCRIPT_hfile_H

#include "path.h"

namespace owlsl {

    class OWL_SCRIPT hfile : public OWL_DLL_MEMORY
    {
        public:
			virtual const path&		name()=0;
            virtual const size_t&	size()=0;
            virtual const uint8_t*	buffer()=0;
    };

}

#endif // OWL_SCRIPT_hfile_H