

#include "huaweicloud/metastudio/v1/model/SignSpecialAgreementRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SignSpecialAgreementRequest::SignSpecialAgreementRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SignSpecialAgreementRequest::~SignSpecialAgreementRequest() = default;

void SignSpecialAgreementRequest::validate()
{
}

web::json::value SignSpecialAgreementRequest::toJson() const
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
bool SignSpecialAgreementRequest::fromJson(const web::json::value& val)
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
            SpecialAgreementSignReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SignSpecialAgreementRequest::getAuthorization() const
{
    return authorization_;
}

void SignSpecialAgreementRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SignSpecialAgreementRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SignSpecialAgreementRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SignSpecialAgreementRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SignSpecialAgreementRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SignSpecialAgreementRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SignSpecialAgreementRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SignSpecialAgreementRequest::getXProjectId() const
{
    return xProjectId_;
}

void SignSpecialAgreementRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SignSpecialAgreementRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SignSpecialAgreementRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

SpecialAgreementSignReq SignSpecialAgreementRequest::getBody() const
{
    return body_;
}

void SignSpecialAgreementRequest::setBody(const SpecialAgreementSignReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SignSpecialAgreementRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SignSpecialAgreementRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


