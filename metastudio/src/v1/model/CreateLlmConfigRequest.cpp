

#include "huaweicloud/metastudio/v1/model/CreateLlmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLlmConfigRequest::CreateLlmConfigRequest()
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

CreateLlmConfigRequest::~CreateLlmConfigRequest() = default;

void CreateLlmConfigRequest::validate()
{
}

web::json::value CreateLlmConfigRequest::toJson() const
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
bool CreateLlmConfigRequest::fromJson(const web::json::value& val)
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
            CreateLlmConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLlmConfigRequest::getAuthorization() const
{
    return authorization_;
}

void CreateLlmConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateLlmConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateLlmConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateLlmConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateLlmConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateLlmConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateLlmConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateLlmConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateLlmConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateLlmConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateLlmConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateLlmConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateLlmConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateLlmConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateLlmConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateLlmConfigReq CreateLlmConfigRequest::getBody() const
{
    return body_;
}

void CreateLlmConfigRequest::setBody(const CreateLlmConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLlmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLlmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


