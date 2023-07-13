

#include "huaweicloud/frs/v2/model/DetectFaceByBase64IntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByBase64IntlRequest::DetectFaceByBase64IntlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectFaceByBase64IntlRequest::~DetectFaceByBase64IntlRequest() = default;

void DetectFaceByBase64IntlRequest::validate()
{
}

web::json::value DetectFaceByBase64IntlRequest::toJson() const
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

bool DetectFaceByBase64IntlRequest::fromJson(const web::json::value& val)
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
            FaceDetectBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectFaceByBase64IntlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectFaceByBase64IntlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectFaceByBase64IntlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectFaceByBase64IntlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceDetectBase64Req DetectFaceByBase64IntlRequest::getBody() const
{
    return body_;
}

void DetectFaceByBase64IntlRequest::setBody(const FaceDetectBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectFaceByBase64IntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectFaceByBase64IntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


