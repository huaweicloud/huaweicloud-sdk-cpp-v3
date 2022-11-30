

#include "huaweicloud/ocr/v1/model/RecognizeTransportationLicenseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTransportationLicenseRequest::RecognizeTransportationLicenseRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeTransportationLicenseRequest::~RecognizeTransportationLicenseRequest() = default;

void RecognizeTransportationLicenseRequest::validate()
{
}

web::json::value RecognizeTransportationLicenseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeTransportationLicenseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransportationLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeTransportationLicenseRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeTransportationLicenseRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeTransportationLicenseRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeTransportationLicenseRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

TransportationLicenseRequestBody RecognizeTransportationLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeTransportationLicenseRequest::setBody(const TransportationLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeTransportationLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeTransportationLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


