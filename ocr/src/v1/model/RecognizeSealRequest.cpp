

#include "huaweicloud/ocr/v1/model/RecognizeSealRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeSealRequest::RecognizeSealRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeSealRequest::~RecognizeSealRequest() = default;

void RecognizeSealRequest::validate()
{
}

web::json::value RecognizeSealRequest::toJson() const
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
bool RecognizeSealRequest::fromJson(const web::json::value& val)
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
            SealRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeSealRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeSealRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeSealRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeSealRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

SealRequestBody RecognizeSealRequest::getBody() const
{
    return body_;
}

void RecognizeSealRequest::setBody(const SealRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeSealRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeSealRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


