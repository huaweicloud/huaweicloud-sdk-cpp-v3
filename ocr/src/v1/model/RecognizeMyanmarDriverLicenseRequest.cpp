

#include "huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMyanmarDriverLicenseRequest::RecognizeMyanmarDriverLicenseRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeMyanmarDriverLicenseRequest::~RecognizeMyanmarDriverLicenseRequest() = default;

void RecognizeMyanmarDriverLicenseRequest::validate()
{
}

web::json::value RecognizeMyanmarDriverLicenseRequest::toJson() const
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

bool RecognizeMyanmarDriverLicenseRequest::fromJson(const web::json::value& val)
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
            MyanmarDriverLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeMyanmarDriverLicenseRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeMyanmarDriverLicenseRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeMyanmarDriverLicenseRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeMyanmarDriverLicenseRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

MyanmarDriverLicenseRequestBody RecognizeMyanmarDriverLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeMyanmarDriverLicenseRequest::setBody(const MyanmarDriverLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeMyanmarDriverLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeMyanmarDriverLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


