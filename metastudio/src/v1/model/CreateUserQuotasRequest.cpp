

#include "huaweicloud/metastudio/v1/model/CreateUserQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateUserQuotasRequest::CreateUserQuotasRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateUserQuotasRequest::~CreateUserQuotasRequest() = default;

void CreateUserQuotasRequest::validate()
{
}

web::json::value CreateUserQuotasRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateUserQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateUserQuotaInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateUserQuotasRequest::getAuthorization() const
{
    return authorization_;
}

void CreateUserQuotasRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateUserQuotasRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateUserQuotasRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateUserQuotasRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateUserQuotasRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateUserQuotasRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateUserQuotasRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateUserQuotasRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateUserQuotasRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateUserQuotasRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateUserQuotasRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

CreateUserQuotaInfo CreateUserQuotasRequest::getBody() const
{
    return body_;
}

void CreateUserQuotasRequest::setBody(const CreateUserQuotaInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUserQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUserQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


