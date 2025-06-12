

#include "huaweicloud/metastudio/v1/model/DeleteRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteRobotRequest::DeleteRobotRequest()
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

DeleteRobotRequest::~DeleteRobotRequest() = default;

void DeleteRobotRequest::validate()
{
}

web::json::value DeleteRobotRequest::toJson() const
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
bool DeleteRobotRequest::fromJson(const web::json::value& val)
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


std::string DeleteRobotRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteRobotRequest::getBody()
{
    return body_;
}

void DeleteRobotRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRobotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRobotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


