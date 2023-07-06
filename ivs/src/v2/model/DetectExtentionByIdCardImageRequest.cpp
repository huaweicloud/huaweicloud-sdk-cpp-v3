

#include "huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectExtentionByIdCardImageRequest::DetectExtentionByIdCardImageRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectExtentionByIdCardImageRequest::~DetectExtentionByIdCardImageRequest() = default;

void DetectExtentionByIdCardImageRequest::validate()
{
}

web::json::value DetectExtentionByIdCardImageRequest::toJson() const
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

bool DetectExtentionByIdCardImageRequest::fromJson(const web::json::value& val)
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
            IvsExtentionByIdCardImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectExtentionByIdCardImageRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectExtentionByIdCardImageRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectExtentionByIdCardImageRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectExtentionByIdCardImageRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

IvsExtentionByIdCardImageRequestBody DetectExtentionByIdCardImageRequest::getBody() const
{
    return body_;
}

void DetectExtentionByIdCardImageRequest::setBody(const IvsExtentionByIdCardImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectExtentionByIdCardImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectExtentionByIdCardImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


