

#include "huaweicloud/metastudio/v1/model/CreateRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateRobotRequest::CreateRobotRequest()
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

CreateRobotRequest::~CreateRobotRequest() = default;

void CreateRobotRequest::validate()
{
}

web::json::value CreateRobotRequest::toJson() const
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
bool CreateRobotRequest::fromJson(const web::json::value& val)
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
            CreateRobotReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRobotRequest::getAuthorization() const
{
    return authorization_;
}

void CreateRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateRobotReq CreateRobotRequest::getBody() const
{
    return body_;
}

void CreateRobotRequest::setBody(const CreateRobotReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRobotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRobotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


