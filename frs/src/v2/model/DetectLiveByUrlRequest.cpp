

#include "huaweicloud/frs/v2/model/DetectLiveByUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlRequest::DetectLiveByUrlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByUrlRequest::~DetectLiveByUrlRequest() = default;

void DetectLiveByUrlRequest::validate()
{
}

web::json::value DetectLiveByUrlRequest::toJson() const
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
bool DetectLiveByUrlRequest::fromJson(const web::json::value& val)
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
            LiveDetectUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectLiveByUrlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByUrlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByUrlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByUrlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LiveDetectUrlReq DetectLiveByUrlRequest::getBody() const
{
    return body_;
}

void DetectLiveByUrlRequest::setBody(const LiveDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


