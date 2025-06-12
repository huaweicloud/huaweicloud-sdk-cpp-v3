

#include "huaweicloud/metastudio/v1/model/CreateAsyncTtsJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsyncTtsJobRequest::CreateAsyncTtsJobRequest()
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

CreateAsyncTtsJobRequest::~CreateAsyncTtsJobRequest() = default;

void CreateAsyncTtsJobRequest::validate()
{
}

web::json::value CreateAsyncTtsJobRequest::toJson() const
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
bool CreateAsyncTtsJobRequest::fromJson(const web::json::value& val)
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
            CreateAsyncTtsJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAsyncTtsJobRequest::getAuthorization() const
{
    return authorization_;
}

void CreateAsyncTtsJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateAsyncTtsJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateAsyncTtsJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateAsyncTtsJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAsyncTtsJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAsyncTtsJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAsyncTtsJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateAsyncTtsJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateAsyncTtsJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateAsyncTtsJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateAsyncTtsJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateAsyncTtsJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateAsyncTtsJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateAsyncTtsJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateAsyncTtsJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateAsyncTtsJobRequestBody CreateAsyncTtsJobRequest::getBody() const
{
    return body_;
}

void CreateAsyncTtsJobRequest::setBody(const CreateAsyncTtsJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAsyncTtsJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAsyncTtsJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


