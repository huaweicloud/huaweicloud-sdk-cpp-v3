

#include "huaweicloud/metastudio/v1/model/CreateActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateActiveCodeRequest::CreateActiveCodeRequest()
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

CreateActiveCodeRequest::~CreateActiveCodeRequest() = default;

void CreateActiveCodeRequest::validate()
{
}

web::json::value CreateActiveCodeRequest::toJson() const
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
bool CreateActiveCodeRequest::fromJson(const web::json::value& val)
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
            CreateActiveCodeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateActiveCodeRequest::getAuthorization() const
{
    return authorization_;
}

void CreateActiveCodeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateActiveCodeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateActiveCodeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateActiveCodeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateActiveCodeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateActiveCodeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateActiveCodeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateActiveCodeRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateActiveCodeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateActiveCodeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateActiveCodeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateActiveCodeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateActiveCodeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateActiveCodeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateActiveCodeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateActiveCodeReq CreateActiveCodeRequest::getBody() const
{
    return body_;
}

void CreateActiveCodeRequest::setBody(const CreateActiveCodeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateActiveCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateActiveCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


