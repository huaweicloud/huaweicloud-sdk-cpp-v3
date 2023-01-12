

#include "huaweicloud/frs/v2/model/DetectFaceByUrlIntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByUrlIntlRequest::DetectFaceByUrlIntlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectFaceByUrlIntlRequest::~DetectFaceByUrlIntlRequest() = default;

void DetectFaceByUrlIntlRequest::validate()
{
}

web::json::value DetectFaceByUrlIntlRequest::toJson() const
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

bool DetectFaceByUrlIntlRequest::fromJson(const web::json::value& val)
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


std::string DetectFaceByUrlIntlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectFaceByUrlIntlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectFaceByUrlIntlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectFaceByUrlIntlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FaceDetectUrlReq DetectFaceByUrlIntlRequest::getBody() const
{
    return body_;
}

void DetectFaceByUrlIntlRequest::setBody(const FaceDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectFaceByUrlIntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectFaceByUrlIntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


