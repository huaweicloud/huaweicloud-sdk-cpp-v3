

#include "huaweicloud/metastudio/v1/model/IflytekSpark.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




IflytekSpark::IflytekSpark()
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

IflytekSpark::~IflytekSpark() = default;

void IflytekSpark::validate()
{
}

web::json::value IflytekSpark::toJson() const
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
bool IflytekSpark::fromJson(const web::json::value& val)
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


std::string IflytekSpark::getAppId() const
{
    return appId_;
}

void IflytekSpark::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool IflytekSpark::appIdIsSet() const
{
    return appIdIsSet_;
}

void IflytekSpark::unsetappId()
{
    appIdIsSet_ = false;
}

std::string IflytekSpark::getAppKey() const
{
    return appKey_;
}

void IflytekSpark::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool IflytekSpark::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void IflytekSpark::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string IflytekSpark::getApiSecret() const
{
    return apiSecret_;
}

void IflytekSpark::setApiSecret(const std::string& value)
{
    apiSecret_ = value;
    apiSecretIsSet_ = true;
}

bool IflytekSpark::apiSecretIsSet() const
{
    return apiSecretIsSet_;
}

void IflytekSpark::unsetapiSecret()
{
    apiSecretIsSet_ = false;
}

bool IflytekSpark::isIsProduction() const
{
    return isProduction_;
}

void IflytekSpark::setIsProduction(bool value)
{
    isProduction_ = value;
    isProductionIsSet_ = true;
}

bool IflytekSpark::isProductionIsSet() const
{
    return isProductionIsSet_;
}

void IflytekSpark::unsetisProduction()
{
    isProductionIsSet_ = false;
}

}
}
}
}
}


