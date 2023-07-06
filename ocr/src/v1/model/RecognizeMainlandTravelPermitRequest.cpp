

#include "huaweicloud/ocr/v1/model/RecognizeMainlandTravelPermitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMainlandTravelPermitRequest::RecognizeMainlandTravelPermitRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeMainlandTravelPermitRequest::~RecognizeMainlandTravelPermitRequest() = default;

void RecognizeMainlandTravelPermitRequest::validate()
{
}

web::json::value RecognizeMainlandTravelPermitRequest::toJson() const
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

bool RecognizeMainlandTravelPermitRequest::fromJson(const web::json::value& val)
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
            MainlandTravelPermitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeMainlandTravelPermitRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeMainlandTravelPermitRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeMainlandTravelPermitRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeMainlandTravelPermitRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

MainlandTravelPermitRequestBody RecognizeMainlandTravelPermitRequest::getBody() const
{
    return body_;
}

void RecognizeMainlandTravelPermitRequest::setBody(const MainlandTravelPermitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeMainlandTravelPermitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeMainlandTravelPermitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


