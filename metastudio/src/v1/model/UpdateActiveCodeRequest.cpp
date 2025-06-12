

#include "huaweicloud/metastudio/v1/model/UpdateActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateActiveCodeRequest::UpdateActiveCodeRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    activeCodeId_ = "";
    activeCodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateActiveCodeRequest::~UpdateActiveCodeRequest() = default;

void UpdateActiveCodeRequest::validate()
{
}

web::json::value UpdateActiveCodeRequest::toJson() const
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
    if(activeCodeIdIsSet_) {
        val[utility::conversions::to_string_t("active_code_id")] = ModelBase::toJson(activeCodeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateActiveCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("active_code_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_code_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateActiveCodeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateActiveCodeRequest::getActiveCodeId() const
{
    return activeCodeId_;
}

void UpdateActiveCodeRequest::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool UpdateActiveCodeRequest::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void UpdateActiveCodeRequest::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

UpdateActiveCodeReq UpdateActiveCodeRequest::getBody() const
{
    return body_;
}

void UpdateActiveCodeRequest::setBody(const UpdateActiveCodeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


