

#include "huaweicloud/frs/v2/model/DetectLiveByBase64IntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByBase64IntlRequest::DetectLiveByBase64IntlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByBase64IntlRequest::~DetectLiveByBase64IntlRequest() = default;

void DetectLiveByBase64IntlRequest::validate()
{
}

web::json::value DetectLiveByBase64IntlRequest::toJson() const
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

bool DetectLiveByBase64IntlRequest::fromJson(const web::json::value& val)
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
            LiveDetectBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectLiveByBase64IntlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByBase64IntlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByBase64IntlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByBase64IntlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LiveDetectBase64Req DetectLiveByBase64IntlRequest::getBody() const
{
    return body_;
}

void DetectLiveByBase64IntlRequest::setBody(const LiveDetectBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByBase64IntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByBase64IntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


