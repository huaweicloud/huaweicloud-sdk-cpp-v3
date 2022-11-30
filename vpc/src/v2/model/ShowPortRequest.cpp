

#include "huaweicloud/vpc/v2/model/ShowPortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowPortRequest::ShowPortRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
}

ShowPortRequest::~ShowPortRequest() = default;

void ShowPortRequest::validate()
{
}

web::json::value ShowPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool ShowPortRequest::fromJson(const web::json::value& val)
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


std::string ShowPortRequest::getPortId() const
{
    return portId_;
}

void ShowPortRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ShowPortRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void ShowPortRequest::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


