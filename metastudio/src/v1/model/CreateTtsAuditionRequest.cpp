

#include "huaweicloud/metastudio/v1/model/CreateTtsAuditionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsAuditionRequest::CreateTtsAuditionRequest()
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
    bodyIsSet_ = false;
}

CreateTtsAuditionRequest::~CreateTtsAuditionRequest() = default;

void CreateTtsAuditionRequest::validate()
{
}

web::json::value CreateTtsAuditionRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTtsAuditionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTtsAuditionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTtsAuditionRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateTtsAuditionRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateTtsAuditionRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateTtsAuditionRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateTtsAuditionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTtsAuditionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTtsAuditionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTtsAuditionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTtsAuditionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTtsAuditionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTtsAuditionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTtsAuditionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTtsAuditionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTtsAuditionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTtsAuditionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTtsAuditionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTtsAuditionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTtsAuditionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTtsAuditionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTtsAuditionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateTtsAuditionRequestBody CreateTtsAuditionRequest::getBody() const
{
    return body_;
}

void CreateTtsAuditionRequest::setBody(const CreateTtsAuditionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTtsAuditionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTtsAuditionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


