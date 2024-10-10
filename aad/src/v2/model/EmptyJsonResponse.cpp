

#include "huaweicloud/aad/v2/model/EmptyJsonResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




EmptyJsonResponse::EmptyJsonResponse()
{
}

EmptyJsonResponse::~EmptyJsonResponse() = default;

void EmptyJsonResponse::validate()
{
}

web::json::value EmptyJsonResponse::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool EmptyJsonResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


}
}
}
}
}


