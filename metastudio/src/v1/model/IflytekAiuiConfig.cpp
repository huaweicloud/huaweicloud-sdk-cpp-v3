

#include "huaweicloud/metastudio/v1/model/IflytekAiuiConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




IflytekAiuiConfig::IflytekAiuiConfig()
{
    appId_ = "";
    appIdIsSet_ = false;
    appKey_ = "";
    appKeyIsSet_ = false;
    apiSecret_ = "";
    apiSecretIsSet_ = false;
    isProduction_ = false;
    isProductionIsSet_ = false;
}

IflytekAiuiConfig::~IflytekAiuiConfig() = default;

void IflytekAiuiConfig::validate()
{
}

web::json::value IflytekAiuiConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(apiSecretIsSet_) {
        val[utility::conversions::to_string_t("api_secret")] = ModelBase::toJson(apiSecret_);
    }
    if(isProductionIsSet_) {
        val[utility::conversions::to_string_t("is_production")] = ModelBase::toJson(isProduction_);
    }

    return val;
}
bool IflytekAiuiConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_production"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_production"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProduction(refVal);
        }
    }
    return ok;
}


std::string IflytekAiuiConfig::getAppId() const
{
    return appId_;
}

void IflytekAiuiConfig::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool IflytekAiuiConfig::appIdIsSet() const
{
    return appIdIsSet_;
}

void IflytekAiuiConfig::unsetappId()
{
    appIdIsSet_ = false;
}

std::string IflytekAiuiConfig::getAppKey() const
{
    return appKey_;
}

void IflytekAiuiConfig::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool IflytekAiuiConfig::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void IflytekAiuiConfig::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string IflytekAiuiConfig::getApiSecret() const
{
    return apiSecret_;
}

void IflytekAiuiConfig::setApiSecret(const std::string& value)
{
    apiSecret_ = value;
    apiSecretIsSet_ = true;
}

bool IflytekAiuiConfig::apiSecretIsSet() const
{
    return apiSecretIsSet_;
}

void IflytekAiuiConfig::unsetapiSecret()
{
    apiSecretIsSet_ = false;
}

bool IflytekAiuiConfig::isIsProduction() const
{
    return isProduction_;
}

void IflytekAiuiConfig::setIsProduction(bool value)
{
    isProduction_ = value;
    isProductionIsSet_ = true;
}

bool IflytekAiuiConfig::isProductionIsSet() const
{
    return isProductionIsSet_;
}

void IflytekAiuiConfig::unsetisProduction()
{
    isProductionIsSet_ = false;
}

}
}
}
}
}


