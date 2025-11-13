

#include "huaweicloud/metastudio/v1/model/ShowAudioRecordConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAudioRecordConfigRequest::ShowAudioRecordConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowAudioRecordConfigRequest::~ShowAudioRecordConfigRequest() = default;

void ShowAudioRecordConfigRequest::validate()
{
}

web::json::value ShowAudioRecordConfigRequest::toJson() const
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

    return val;
}
bool ShowAudioRecordConfigRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAudioRecordConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAudioRecordConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAudioRecordConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAudioRecordConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAudioRecordConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAudioRecordConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAudioRecordConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAudioRecordConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAudioRecordConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowAudioRecordConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowAudioRecordConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowAudioRecordConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowAudioRecordConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowAudioRecordConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowAudioRecordConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowAudioRecordConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


