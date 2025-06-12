

#include "huaweicloud/metastudio/v1/model/CreateLivePlatformRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLivePlatformRequest::CreateLivePlatformRequest()
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

CreateLivePlatformRequest::~CreateLivePlatformRequest() = default;

void CreateLivePlatformRequest::validate()
{
}

web::json::value CreateLivePlatformRequest::toJson() const
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
bool CreateLivePlatformRequest::fromJson(const web::json::value& val)
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
            CreateLivePlatformReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLivePlatformRequest::getAuthorization() const
{
    return authorization_;
}

void CreateLivePlatformRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateLivePlatformRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateLivePlatformRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateLivePlatformRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateLivePlatformRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateLivePlatformRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateLivePlatformRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateLivePlatformRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateLivePlatformRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateLivePlatformRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateLivePlatformRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateLivePlatformRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateLivePlatformRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateLivePlatformRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateLivePlatformRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateLivePlatformReq CreateLivePlatformRequest::getBody() const
{
    return body_;
}

void CreateLivePlatformRequest::setBody(const CreateLivePlatformReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLivePlatformRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLivePlatformRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


