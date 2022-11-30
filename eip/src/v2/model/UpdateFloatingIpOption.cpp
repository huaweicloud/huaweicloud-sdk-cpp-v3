

#include "huaweicloud/eip/v2/model/UpdateFloatingIpOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdateFloatingIpOption::UpdateFloatingIpOption()
{
    portId_ = "";
    portIdIsSet_ = false;
}

UpdateFloatingIpOption::~UpdateFloatingIpOption() = default;

void UpdateFloatingIpOption::validate()
{
}

web::json::value UpdateFloatingIpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool UpdateFloatingIpOption::fromJson(const web::json::value& val)
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


std::string UpdateFloatingIpOption::getPortId() const
{
    return portId_;
}

void UpdateFloatingIpOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool UpdateFloatingIpOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void UpdateFloatingIpOption::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


