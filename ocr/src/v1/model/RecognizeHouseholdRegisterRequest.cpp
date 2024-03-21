

#include "huaweicloud/ocr/v1/model/RecognizeHouseholdRegisterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHouseholdRegisterRequest::RecognizeHouseholdRegisterRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeHouseholdRegisterRequest::~RecognizeHouseholdRegisterRequest() = default;

void RecognizeHouseholdRegisterRequest::validate()
{
}

web::json::value RecognizeHouseholdRegisterRequest::toJson() const
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
bool RecognizeHouseholdRegisterRequest::fromJson(const web::json::value& val)
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
            HouseholdRegisterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeHouseholdRegisterRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeHouseholdRegisterRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeHouseholdRegisterRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeHouseholdRegisterRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HouseholdRegisterRequestBody RecognizeHouseholdRegisterRequest::getBody() const
{
    return body_;
}

void RecognizeHouseholdRegisterRequest::setBody(const HouseholdRegisterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeHouseholdRegisterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeHouseholdRegisterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


