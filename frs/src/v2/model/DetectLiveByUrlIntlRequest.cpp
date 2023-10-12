

#include "huaweicloud/frs/v2/model/DetectLiveByUrlIntlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlIntlRequest::DetectLiveByUrlIntlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByUrlIntlRequest::~DetectLiveByUrlIntlRequest() = default;

void DetectLiveByUrlIntlRequest::validate()
{
}

web::json::value DetectLiveByUrlIntlRequest::toJson() const
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
bool DetectLiveByUrlIntlRequest::fromJson(const web::json::value& val)
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


std::string DetectLiveByUrlIntlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByUrlIntlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByUrlIntlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByUrlIntlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LiveDetectUrlReq DetectLiveByUrlIntlRequest::getBody() const
{
    return body_;
}

void DetectLiveByUrlIntlRequest::setBody(const LiveDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByUrlIntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByUrlIntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


