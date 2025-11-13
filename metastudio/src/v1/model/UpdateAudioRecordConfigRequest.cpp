

#include "huaweicloud/metastudio/v1/model/UpdateAudioRecordConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAudioRecordConfigRequest::UpdateAudioRecordConfigRequest()
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

UpdateAudioRecordConfigRequest::~UpdateAudioRecordConfigRequest() = default;

void UpdateAudioRecordConfigRequest::validate()
{
}

web::json::value UpdateAudioRecordConfigRequest::toJson() const
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
bool UpdateAudioRecordConfigRequest::fromJson(const web::json::value& val)
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
            UpdateAudioRecordConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAudioRecordConfigRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateAudioRecordConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateAudioRecordConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateAudioRecordConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateAudioRecordConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateAudioRecordConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateAudioRecordConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateAudioRecordConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateAudioRecordConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateAudioRecordConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateAudioRecordConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateAudioRecordConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateAudioRecordConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateAudioRecordConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateAudioRecordConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateAudioRecordConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdateAudioRecordConfigReq UpdateAudioRecordConfigRequest::getBody() const
{
    return body_;
}

void UpdateAudioRecordConfigRequest::setBody(const UpdateAudioRecordConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAudioRecordConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAudioRecordConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


