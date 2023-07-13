

#include "huaweicloud/frs/v2/model/DetectFaceByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByUrlRequest::DetectFaceByUrlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectFaceByUrlRequest::~DetectFaceByUrlRequest() = default;

void DetectFaceByUrlRequest::validate()
{
}

web::json::value DetectFaceByUrlRequest::toJson() const
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

bool DetectFaceByUrlRequest::fromJson(const web::json::value& val)
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
            FaceDetectUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectFaceByUrlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectFaceByUrlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectFaceByUrlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectFaceByUrlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceDetectUrlReq DetectFaceByUrlRequest::getBody() const
{
    return body_;
}

void DetectFaceByUrlRequest::setBody(const FaceDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectFaceByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectFaceByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


