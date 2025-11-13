

#include "huaweicloud/metastudio/v1/model/UpdateSmartLiveUserConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartLiveUserConfigRequest::UpdateSmartLiveUserConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSmartLiveUserConfigRequest::~UpdateSmartLiveUserConfigRequest() = default;

void UpdateSmartLiveUserConfigRequest::validate()
{
}

web::json::value UpdateSmartLiveUserConfigRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSmartLiveUserConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSmartLiveUserConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSmartLiveUserConfigRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateSmartLiveUserConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateSmartLiveUserConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateSmartLiveUserConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateSmartLiveUserConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateSmartLiveUserConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateSmartLiveUserConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateSmartLiveUserConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateSmartLiveUserConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateSmartLiveUserConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateSmartLiveUserConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateSmartLiveUserConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

UpdateSmartLiveUserConfigReq UpdateSmartLiveUserConfigRequest::getBody() const
{
    return body_;
}

void UpdateSmartLiveUserConfigRequest::setBody(const UpdateSmartLiveUserConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSmartLiveUserConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSmartLiveUserConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


