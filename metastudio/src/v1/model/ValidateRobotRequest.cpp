

#include "huaweicloud/metastudio/v1/model/ValidateRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ValidateRobotRequest::ValidateRobotRequest()
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

ValidateRobotRequest::~ValidateRobotRequest() = default;

void ValidateRobotRequest::validate()
{
}

web::json::value ValidateRobotRequest::toJson() const
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
bool ValidateRobotRequest::fromJson(const web::json::value& val)
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
            ValidateRobotReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ValidateRobotRequest::getAuthorization() const
{
    return authorization_;
}

void ValidateRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ValidateRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ValidateRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ValidateRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ValidateRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ValidateRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ValidateRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ValidateRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void ValidateRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ValidateRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ValidateRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ValidateRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ValidateRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ValidateRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ValidateRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ValidateRobotReq ValidateRobotRequest::getBody() const
{
    return body_;
}

void ValidateRobotRequest::setBody(const ValidateRobotReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateRobotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateRobotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


