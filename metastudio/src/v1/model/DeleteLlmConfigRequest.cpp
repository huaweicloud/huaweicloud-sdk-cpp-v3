

#include "huaweicloud/metastudio/v1/model/DeleteLlmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteLlmConfigRequest::DeleteLlmConfigRequest()
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

DeleteLlmConfigRequest::~DeleteLlmConfigRequest() = default;

void DeleteLlmConfigRequest::validate()
{
}

web::json::value DeleteLlmConfigRequest::toJson() const
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
bool DeleteLlmConfigRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteLlmConfigRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteLlmConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteLlmConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteLlmConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteLlmConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteLlmConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteLlmConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteLlmConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteLlmConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteLlmConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteLlmConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteLlmConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteLlmConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteLlmConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteLlmConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteLlmConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteLlmConfigRequest::getBody()
{
    return body_;
}

void DeleteLlmConfigRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteLlmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteLlmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


