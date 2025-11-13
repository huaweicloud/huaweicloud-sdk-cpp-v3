

#include "huaweicloud/metastudio/v1/model/DeleteAudioRecordConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAudioRecordConfigRequest::DeleteAudioRecordConfigRequest()
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

DeleteAudioRecordConfigRequest::~DeleteAudioRecordConfigRequest() = default;

void DeleteAudioRecordConfigRequest::validate()
{
}

web::json::value DeleteAudioRecordConfigRequest::toJson() const
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
bool DeleteAudioRecordConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteAudioRecordConfigRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteAudioRecordConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteAudioRecordConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteAudioRecordConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteAudioRecordConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAudioRecordConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAudioRecordConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAudioRecordConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteAudioRecordConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteAudioRecordConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteAudioRecordConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteAudioRecordConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteAudioRecordConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteAudioRecordConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteAudioRecordConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteAudioRecordConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


