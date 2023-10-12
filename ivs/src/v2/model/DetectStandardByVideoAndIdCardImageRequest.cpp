

#include "huaweicloud/ivs/v2/model/DetectStandardByVideoAndIdCardImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByVideoAndIdCardImageRequest::DetectStandardByVideoAndIdCardImageRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectStandardByVideoAndIdCardImageRequest::~DetectStandardByVideoAndIdCardImageRequest() = default;

void DetectStandardByVideoAndIdCardImageRequest::validate()
{
}

web::json::value DetectStandardByVideoAndIdCardImageRequest::toJson() const
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
bool DetectStandardByVideoAndIdCardImageRequest::fromJson(const web::json::value& val)
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
            IvsStandardByVideoAndIdCardImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectStandardByVideoAndIdCardImageRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectStandardByVideoAndIdCardImageRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectStandardByVideoAndIdCardImageRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectStandardByVideoAndIdCardImageRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

IvsStandardByVideoAndIdCardImageRequestBody DetectStandardByVideoAndIdCardImageRequest::getBody() const
{
    return body_;
}

void DetectStandardByVideoAndIdCardImageRequest::setBody(const IvsStandardByVideoAndIdCardImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectStandardByVideoAndIdCardImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectStandardByVideoAndIdCardImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


