

#include "huaweicloud/metastudio/v1/model/SetTtscGroupAssetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTtscGroupAssetsRequest::SetTtscGroupAssetsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetTtscGroupAssetsRequest::~SetTtscGroupAssetsRequest() = default;

void SetTtscGroupAssetsRequest::validate()
{
}

web::json::value SetTtscGroupAssetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetTtscGroupAssetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetTtscGroupAssetsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetTtscGroupAssetsRequest::getXRequestId() const
{
    return xRequestId_;
}

void SetTtscGroupAssetsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetTtscGroupAssetsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SetTtscGroupAssetsRequest::getAuthorization() const
{
    return authorization_;
}

void SetTtscGroupAssetsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SetTtscGroupAssetsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SetTtscGroupAssetsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SetTtscGroupAssetsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SetTtscGroupAssetsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SetTtscGroupAssetsRequest::getXProjectId() const
{
    return xProjectId_;
}

void SetTtscGroupAssetsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SetTtscGroupAssetsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string SetTtscGroupAssetsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void SetTtscGroupAssetsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void SetTtscGroupAssetsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string SetTtscGroupAssetsRequest::getGroupId() const
{
    return groupId_;
}

void SetTtscGroupAssetsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void SetTtscGroupAssetsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

SetTtscGroupAssetsRequestBody SetTtscGroupAssetsRequest::getBody() const
{
    return body_;
}

void SetTtscGroupAssetsRequest::setBody(const SetTtscGroupAssetsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTtscGroupAssetsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTtscGroupAssetsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


