

#include "huaweicloud/modelarts/v1/model/VerifyAgencyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VerifyAgencyResponse::VerifyAgencyResponse()
{
    isAuthorized_ = false;
    isAuthorizedIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

VerifyAgencyResponse::~VerifyAgencyResponse() = default;

void VerifyAgencyResponse::validate()
{
}

web::json::value VerifyAgencyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAuthorizedIsSet_) {
        val[utility::conversions::to_string_t("is_authorized")] = ModelBase::toJson(isAuthorized_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool VerifyAgencyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_authorized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_authorized"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAuthorized(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


bool VerifyAgencyResponse::isIsAuthorized() const
{
    return isAuthorized_;
}

void VerifyAgencyResponse::setIsAuthorized(bool value)
{
    isAuthorized_ = value;
    isAuthorizedIsSet_ = true;
}

bool VerifyAgencyResponse::isAuthorizedIsSet() const
{
    return isAuthorizedIsSet_;
}

void VerifyAgencyResponse::unsetisAuthorized()
{
    isAuthorizedIsSet_ = false;
}

std::string VerifyAgencyResponse::getAgencyName() const
{
    return agencyName_;
}

void VerifyAgencyResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool VerifyAgencyResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void VerifyAgencyResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string VerifyAgencyResponse::getXRequestId() const
{
    return xRequestId_;
}

void VerifyAgencyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool VerifyAgencyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void VerifyAgencyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


