

#include "huaweicloud/gaussdbfornosql/v3/model/UpdatePasswordlessConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdatePasswordlessConfigRequestBody::UpdatePasswordlessConfigRequestBody()
{
    configIpsIsSet_ = false;
}

UpdatePasswordlessConfigRequestBody::~UpdatePasswordlessConfigRequestBody() = default;

void UpdatePasswordlessConfigRequestBody::validate()
{
}

web::json::value UpdatePasswordlessConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIpsIsSet_) {
        val[utility::conversions::to_string_t("config_ips")] = ModelBase::toJson(configIps_);
    }

    return val;
}
bool UpdatePasswordlessConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigIps(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpdatePasswordlessConfigRequestBody::getConfigIps()
{
    return configIps_;
}

void UpdatePasswordlessConfigRequestBody::setConfigIps(const std::vector<std::string>& value)
{
    configIps_ = value;
    configIpsIsSet_ = true;
}

bool UpdatePasswordlessConfigRequestBody::configIpsIsSet() const
{
    return configIpsIsSet_;
}

void UpdatePasswordlessConfigRequestBody::unsetconfigIps()
{
    configIpsIsSet_ = false;
}

}
}
}
}
}


