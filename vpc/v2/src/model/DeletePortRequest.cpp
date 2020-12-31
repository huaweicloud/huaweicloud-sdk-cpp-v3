

#include "huaweicloud/vpc/model/DeletePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeletePortRequest::DeletePortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
}

DeletePortRequest::~DeletePortRequest() = default;

void DeletePortRequest::validate()
{
}

web::json::value DeletePortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool DeletePortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    return ok;
}


std::string DeletePortRequest::getPortId() const
{
    return portId_;
}

void DeletePortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool DeletePortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void DeletePortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


