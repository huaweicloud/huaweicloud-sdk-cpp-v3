

#include "huaweicloud/metastudio/v1/model/CreateVideoMotionCaptureJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateVideoMotionCaptureJobRequest::CreateVideoMotionCaptureJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    xUserPrivilege_ = "";
    xUserPrivilegeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVideoMotionCaptureJobRequest::~CreateVideoMotionCaptureJobRequest() = default;

void CreateVideoMotionCaptureJobRequest::validate()
{
}

web::json::value CreateVideoMotionCaptureJobRequest::toJson() const
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
    if(xUserPrivilegeIsSet_) {
        val[utility::conversions::to_string_t("X-User-Privilege")] = ModelBase::toJson(xUserPrivilege_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateVideoMotionCaptureJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-User-Privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-User-Privilege"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXUserPrivilege(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VideoMotionCaptureJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVideoMotionCaptureJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreateVideoMotionCaptureJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateVideoMotionCaptureJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateVideoMotionCaptureJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateVideoMotionCaptureJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateVideoMotionCaptureJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateVideoMotionCaptureJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateVideoMotionCaptureJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CreateVideoMotionCaptureJobRequest::getXUserPrivilege() const
{
    return xUserPrivilege_;
}

void CreateVideoMotionCaptureJobRequest::setXUserPrivilege(const std::string& value)
{
    xUserPrivilege_ = value;
    xUserPrivilegeIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::xUserPrivilegeIsSet() const
{
    return xUserPrivilegeIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetxUserPrivilege()
{
    xUserPrivilegeIsSet_ = false;
}

VideoMotionCaptureJobReq CreateVideoMotionCaptureJobRequest::getBody() const
{
    return body_;
}

void CreateVideoMotionCaptureJobRequest::setBody(const VideoMotionCaptureJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVideoMotionCaptureJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVideoMotionCaptureJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


