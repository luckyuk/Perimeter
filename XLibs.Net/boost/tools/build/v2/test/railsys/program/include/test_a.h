//  Copyright (c) 2003 Institute of Transport, 
//             Railway Construction and Operation, 
//             University of Hanover, Germany
//
// Permission to copy, use, modify, sell and distribute this software is
// granted provided this copyright notice appears in all copies. This
// software is provided "as is" without express or implied warranty, and
// with no claim as to its suitability for any purpose.


#include <qobject.h>

class TestA : public QObject
{
    Q_OBJECT

public:

    TestA();
    
    // Needed to suppress 'unused variable' varning.
    void do_something() { }
};
