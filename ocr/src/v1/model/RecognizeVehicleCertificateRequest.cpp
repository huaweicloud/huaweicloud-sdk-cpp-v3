

#include "huaweicloud/ocr/v1/model/RecognizeVehicleCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleCertificateRequest::RecognizeVehicleCertificateRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeVehicleCertificateRequest::~RecognizeVehicleCertificateRequest() = default;

void RecognizeVehicleCertificateRequest::validate()
{
}

web::json::value RecognizeVehicleCertificateRequest::toJson() const
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
bool RecognizeVehicleCertificateRequest::fromJson(const web::json::value& val)
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
            VehicleCertificateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeVehicleCertificateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeVehicleCertificateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeVehicleCertificateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeVehicleCertificateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

VehicleCertificateRequestBody RecognizeVehicleCertificateRequest::getBody() const
{
    return body_;
}

void RecognizeVehicleCertificateRequest::setBody(const VehicleCertificateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVehicleCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVehicleCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


