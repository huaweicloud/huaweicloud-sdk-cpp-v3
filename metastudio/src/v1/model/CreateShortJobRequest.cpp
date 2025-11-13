

#include "huaweicloud/metastudio/v1/model/CreateShortJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateShortJobRequest::CreateShortJobRequest()
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

CreateShortJobRequest::~CreateShortJobRequest() = default;

void CreateShortJobRequest::validate()
{
}

web::json::value CreateShortJobRequest::toJson() const
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
bool CreateShortJobRequest::fromJson(const web::json::value& val)
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
            CreateShortJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateShortJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreateShortJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateShortJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateShortJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateShortJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateShortJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateShortJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateShortJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateShortJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateShortJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateShortJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateShortJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateShortJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateShortJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateShortJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateShortJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateShortJobReq CreateShortJobRequest::getBody() const
{
    return body_;
}

void CreateShortJobRequest::setBody(const CreateShortJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateShortJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateShortJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


