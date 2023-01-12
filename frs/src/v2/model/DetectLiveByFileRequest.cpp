

#include "huaweicloud/frs/v2/model/DetectLiveByFileRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileRequest::DetectLiveByFileRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveByFileRequest::~DetectLiveByFileRequest() = default;

void DetectLiveByFileRequest::validate()
{
}

web::json::value DetectLiveByFileRequest::toJson() const
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

bool DetectLiveByFileRequest::fromJson(const web::json::value& val)
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
            DetectLiveByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectLiveByFileRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveByFileRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveByFileRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveByFileRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DetectLiveByFileRequestBody DetectLiveByFileRequest::getBody() const
{
    return body_;
}

void DetectLiveByFileRequest::setBody(const DetectLiveByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


