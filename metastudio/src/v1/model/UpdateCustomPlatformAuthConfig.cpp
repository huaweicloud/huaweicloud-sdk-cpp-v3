

#include "huaweicloud/metastudio/v1/model/UpdateCustomPlatformAuthConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateCustomPlatformAuthConfig::UpdateCustomPlatformAuthConfig()
{
    key_ = "";
    keyIsSet_ = false;
}

UpdateCustomPlatformAuthConfig::~UpdateCustomPlatformAuthConfig() = default;

void UpdateCustomPlatformAuthConfig::validate()
{
}

web::json::value UpdateCustomPlatformAuthConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool UpdateCustomPlatformAuthConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string UpdateCustomPlatformAuthConfig::getKey() const
{
    return key_;
}

void UpdateCustomPlatformAuthConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UpdateCustomPlatformAuthConfig::keyIsSet() const
{
    return keyIsSet_;
}

void UpdateCustomPlatformAuthConfig::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


