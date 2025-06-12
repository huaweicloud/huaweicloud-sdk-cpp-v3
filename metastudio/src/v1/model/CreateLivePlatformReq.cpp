

#include "huaweicloud/metastudio/v1/model/CreateLivePlatformReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLivePlatformReq::CreateLivePlatformReq()
{
    name_ = "";
    nameIsSet_ = false;
    authConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
}

CreateLivePlatformReq::~CreateLivePlatformReq() = default;

void CreateLivePlatformReq::validate()
{
}

web::json::value CreateLivePlatformReq::toJson() const
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
bool CreateLivePlatformReq::fromJson(const web::json::value& val)
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
            CustomPlatformAuthConfig refVal;
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


std::string CreateLivePlatformReq::getName() const
{
    return name_;
}

void CreateLivePlatformReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateLivePlatformReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateLivePlatformReq::unsetname()
{
    nameIsSet_ = false;
}

CustomPlatformAuthConfig CreateLivePlatformReq::getAuthConfig() const
{
    return authConfig_;
}

void CreateLivePlatformReq::setAuthConfig(const CustomPlatformAuthConfig& value)
{
    authConfig_ = value;
    authConfigIsSet_ = true;
}

bool CreateLivePlatformReq::authConfigIsSet() const
{
    return authConfigIsSet_;
}

void CreateLivePlatformReq::unsetauthConfig()
{
    authConfigIsSet_ = false;
}

std::vector<StandardPlatformApiConfig>& CreateLivePlatformReq::getCallbackConfig()
{
    return callbackConfig_;
}

void CreateLivePlatformReq::setCallbackConfig(const std::vector<StandardPlatformApiConfig>& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool CreateLivePlatformReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void CreateLivePlatformReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}


