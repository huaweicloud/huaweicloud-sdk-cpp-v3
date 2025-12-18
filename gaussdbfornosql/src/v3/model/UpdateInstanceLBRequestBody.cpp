

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceLBRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceLBRequestBody::UpdateInstanceLBRequestBody()
{
    ip_ = "";
    ipIsSet_ = false;
}

UpdateInstanceLBRequestBody::~UpdateInstanceLBRequestBody() = default;

void UpdateInstanceLBRequestBody::validate()
{
}

web::json::value UpdateInstanceLBRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool UpdateInstanceLBRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceLBRequestBody::getIp() const
{
    return ip_;
}

void UpdateInstanceLBRequestBody::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateInstanceLBRequestBody::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateInstanceLBRequestBody::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


