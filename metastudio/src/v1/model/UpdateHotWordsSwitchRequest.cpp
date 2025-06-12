

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsSwitchRequest::UpdateHotWordsSwitchRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHotWordsSwitchRequest::~UpdateHotWordsSwitchRequest() = default;

void UpdateHotWordsSwitchRequest::validate()
{
}

web::json::value UpdateHotWordsSwitchRequest::toJson() const
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
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHotWordsSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHotWordsSwitchReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHotWordsSwitchRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateHotWordsSwitchRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateHotWordsSwitchRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateHotWordsSwitchRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateHotWordsSwitchRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateHotWordsSwitchRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateHotWordsSwitchRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateHotWordsSwitchRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateHotWordsSwitchRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateHotWordsSwitchRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateHotWordsSwitchRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateHotWordsSwitchRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateHotWordsSwitchRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateHotWordsSwitchRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateHotWordsSwitchRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateHotWordsSwitchRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdateHotWordsSwitchReq UpdateHotWordsSwitchRequest::getBody() const
{
    return body_;
}

void UpdateHotWordsSwitchRequest::setBody(const UpdateHotWordsSwitchReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHotWordsSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHotWordsSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


