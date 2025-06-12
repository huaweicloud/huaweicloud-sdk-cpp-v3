

#include "huaweicloud/metastudio/v1/model/CustomPlatformAuthConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CustomPlatformAuthConfig::CustomPlatformAuthConfig()
{
    key_ = "";
    keyIsSet_ = false;
}

CustomPlatformAuthConfig::~CustomPlatformAuthConfig() = default;

void CustomPlatformAuthConfig::validate()
{
}

web::json::value CustomPlatformAuthConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool CustomPlatformAuthConfig::fromJson(const web::json::value& val)
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


std::string CustomPlatformAuthConfig::getKey() const
{
    return key_;
}

void CustomPlatformAuthConfig::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomPlatformAuthConfig::keyIsSet() const
{
    return keyIsSet_;
}

void CustomPlatformAuthConfig::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


