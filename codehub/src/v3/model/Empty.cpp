

#include "huaweicloud/codehub/v3/model/Empty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




Empty::Empty()
{
}

Empty::~Empty() = default;

void Empty::validate()
{
}

web::json::value Empty::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool Empty::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


}
}
}
}
}


