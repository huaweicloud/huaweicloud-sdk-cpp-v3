

#include "huaweicloud/metastudio/v1/model/UpdateLivePlatformReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLivePlatformReq::UpdateLivePlatformReq()
{
    name_ = "";
    nameIsSet_ = false;
    authConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
}

UpdateLivePlatformReq::~UpdateLivePlatformReq() = default;

void UpdateLivePlatformReq::validate()
{
}

web::json::value UpdateLivePlatformReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authConfigIsSet_) {
        val[utility::conversions::to_string_t("auth_config")] = ModelBase::toJson(authConfig_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }

    return val;
}
bool UpdateLivePlatformReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_config"));
        if(!fieldValue.is_null())
        {
            UpdateCustomPlatformAuthConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            std::vector<StandardPlatformApiConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateLivePlatformReq::getName() const
{
    return name_;
}

void UpdateLivePlatformReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateLivePlatformReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateLivePlatformReq::unsetname()
{
    nameIsSet_ = false;
}

UpdateCustomPlatformAuthConfig UpdateLivePlatformReq::getAuthConfig() const
{
    return authConfig_;
}

void UpdateLivePlatformReq::setAuthConfig(const UpdateCustomPlatformAuthConfig& value)
{
    authConfig_ = value;
    authConfigIsSet_ = true;
}

bool UpdateLivePlatformReq::authConfigIsSet() const
{
    return authConfigIsSet_;
}

void UpdateLivePlatformReq::unsetauthConfig()
{
    authConfigIsSet_ = false;
}

std::vector<StandardPlatformApiConfig>& UpdateLivePlatformReq::getCallbackConfig()
{
    return callbackConfig_;
}

void UpdateLivePlatformReq::setCallbackConfig(const std::vector<StandardPlatformApiConfig>& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool UpdateLivePlatformReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void UpdateLivePlatformReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}


