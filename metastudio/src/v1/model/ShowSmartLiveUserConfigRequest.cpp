

#include "huaweicloud/metastudio/v1/model/ShowSmartLiveUserConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartLiveUserConfigRequest::ShowSmartLiveUserConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
}

ShowSmartLiveUserConfigRequest::~ShowSmartLiveUserConfigRequest() = default;

void ShowSmartLiveUserConfigRequest::validate()
{
}

web::json::value ShowSmartLiveUserConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }

    return val;
}
bool ShowSmartLiveUserConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowSmartLiveUserConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ShowSmartLiveUserConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowSmartLiveUserConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowSmartLiveUserConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowSmartLiveUserConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowSmartLiveUserConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowSmartLiveUserConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowSmartLiveUserConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowSmartLiveUserConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowSmartLiveUserConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowSmartLiveUserConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowSmartLiveUserConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

}
}
}
}
}


