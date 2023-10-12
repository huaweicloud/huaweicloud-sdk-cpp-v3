

#include "huaweicloud/vpc/v2/model/ListPortsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListPortsResponse::ListPortsResponse()
{
    portsIsSet_ = false;
}

ListPortsResponse::~ListPortsResponse() = default;

void ListPortsResponse::validate()
{
}

web::json::value ListPortsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }

    return val;
}
bool ListPortsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<Port> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    return ok;
}


std::vector<Port>& ListPortsResponse::getPorts()
{
    return ports_;
}

void ListPortsResponse::setPorts(const std::vector<Port>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool ListPortsResponse::portsIsSet() const
{
    return portsIsSet_;
}

void ListPortsResponse::unsetports()
{
    portsIsSet_ = false;
}

}
}
}
}
}


