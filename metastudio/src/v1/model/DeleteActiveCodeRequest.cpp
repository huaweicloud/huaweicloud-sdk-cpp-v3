

#include "huaweicloud/metastudio/v1/model/DeleteActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteActiveCodeRequest::DeleteActiveCodeRequest()
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

DeleteActiveCodeRequest::~DeleteActiveCodeRequest() = default;

void DeleteActiveCodeRequest::validate()
{
}

web::json::value DeleteActiveCodeRequest::toJson() const
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
bool DeleteActiveCodeRequest::fromJson(const web::json::value& val)
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


std::string DeleteActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteActiveCodeRequest::getBody()
{
    return body_;
}

void DeleteActiveCodeRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


