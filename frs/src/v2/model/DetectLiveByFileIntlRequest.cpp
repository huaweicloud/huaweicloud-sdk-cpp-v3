

#include "huaweicloud/frs/v2/model/DetectLiveByFileIntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileIntlRequest::DetectLiveByFileIntlRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByFileIntlRequest::~DetectLiveByFileIntlRequest() = default;

void DetectLiveByFileIntlRequest::validate()
{
}

web::json::value DetectLiveByFileIntlRequest::toJson() const
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

bool DetectLiveByFileIntlRequest::fromJson(const web::json::value& val)
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
            DetectLiveByFileIntlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectLiveByFileIntlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByFileIntlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByFileIntlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByFileIntlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DetectLiveByFileIntlRequestBody DetectLiveByFileIntlRequest::getBody() const
{
    return body_;
}

void DetectLiveByFileIntlRequest::setBody(const DetectLiveByFileIntlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByFileIntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByFileIntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


