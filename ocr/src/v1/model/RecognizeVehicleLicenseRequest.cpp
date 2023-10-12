

#include "huaweicloud/ocr/v1/model/RecognizeVehicleLicenseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleLicenseRequest::RecognizeVehicleLicenseRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeVehicleLicenseRequest::~RecognizeVehicleLicenseRequest() = default;

void RecognizeVehicleLicenseRequest::validate()
{
}

web::json::value RecognizeVehicleLicenseRequest::toJson() const
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
bool RecognizeVehicleLicenseRequest::fromJson(const web::json::value& val)
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
            VehicleLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeVehicleLicenseRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeVehicleLicenseRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeVehicleLicenseRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeVehicleLicenseRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

VehicleLicenseRequestBody RecognizeVehicleLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeVehicleLicenseRequest::setBody(const VehicleLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVehicleLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVehicleLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


