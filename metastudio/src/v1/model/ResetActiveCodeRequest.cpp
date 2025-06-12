

#include "huaweicloud/metastudio/v1/model/ResetActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResetActiveCodeRequest::ResetActiveCodeRequest()
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

ResetActiveCodeRequest::~ResetActiveCodeRequest() = default;

void ResetActiveCodeRequest::validate()
{
}

web::json::value ResetActiveCodeRequest::toJson() const
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
bool ResetActiveCodeRequest::fromJson(const web::json::value& val)
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
            ResetActiveCodeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void ResetActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ResetActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ResetActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ResetActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ResetActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ResetActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ResetActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ResetActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void ResetActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ResetActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ResetActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ResetActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ResetActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ResetActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ResetActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ResetActiveCodeRequest::getActiveCodeId() const
{
    return activeCodeId_;
}

void ResetActiveCodeRequest::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool ResetActiveCodeRequest::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void ResetActiveCodeRequest::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

ResetActiveCodeReq ResetActiveCodeRequest::getBody() const
{
    return body_;
}

void ResetActiveCodeRequest::setBody(const ResetActiveCodeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


