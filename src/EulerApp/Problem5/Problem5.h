//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "BaseProblem.h"


class Problem5 : public BaseProblem
{
public:
	Problem5();
	~Problem5();

protected:
   virtual void Execute();
   virtual std::string ProblemName() { return "Problem5"; }
};
