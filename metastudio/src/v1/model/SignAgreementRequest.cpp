

#include "huaweicloud/metastudio/v1/model/SignAgreementRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SignAgreementRequest::SignAgreementRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
}

SignAgreementRequest::~SignAgreementRequest() = default;

void SignAgreementRequest::validate()
{
}

web::json::value SignAgreementRequest::toJson() const
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

    return val;
}
bool SignAgreementRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SignAgreementRequest::getAuthorization() const
{
    return authorization_;
}

void SignAgreementRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SignAgreementRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SignAgreementRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SignAgreementRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SignAgreementRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SignAgreementRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SignAgreementRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SignAgreementRequest::getXProjectId() const
{
    return xProjectId_;
}

void SignAgreementRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SignAgreementRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SignAgreementRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

}
}
}
}
}


