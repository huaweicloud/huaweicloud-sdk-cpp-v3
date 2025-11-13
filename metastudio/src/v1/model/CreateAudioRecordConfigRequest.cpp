

#include "huaweicloud/metastudio/v1/model/CreateAudioRecordConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAudioRecordConfigRequest::CreateAudioRecordConfigRequest()
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

CreateAudioRecordConfigRequest::~CreateAudioRecordConfigRequest() = default;

void CreateAudioRecordConfigRequest::validate()
{
}

web::json::value CreateAudioRecordConfigRequest::toJson() const
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
bool CreateAudioRecordConfigRequest::fromJson(const web::json::value& val)
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
            CreateAudioRecordConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAudioRecordConfigRequest::getAuthorization() const
{
    return authorization_;
}

void CreateAudioRecordConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateAudioRecordConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateAudioRecordConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateAudioRecordConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAudioRecordConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAudioRecordConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAudioRecordConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateAudioRecordConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateAudioRecordConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateAudioRecordConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateAudioRecordConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateAudioRecordConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateAudioRecordConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateAudioRecordConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateAudioRecordConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateAudioRecordConfigReq CreateAudioRecordConfigRequest::getBody() const
{
    return body_;
}

void CreateAudioRecordConfigRequest::setBody(const CreateAudioRecordConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAudioRecordConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAudioRecordConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


