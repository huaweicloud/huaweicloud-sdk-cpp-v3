

#include "huaweicloud/frs/v2/model/DetectLiveFaceByFileRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByFileRequest::DetectLiveFaceByFileRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectLiveFaceByFileRequest::~DetectLiveFaceByFileRequest() = default;

void DetectLiveFaceByFileRequest::validate()
{
}

web::json::value DetectLiveFaceByFileRequest::toJson() const
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

bool DetectLiveFaceByFileRequest::fromJson(const web::json::value& val)
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
            DetectLiveFaceByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectLiveFaceByFileRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectLiveFaceByFileRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectLiveFaceByFileRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectLiveFaceByFileRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DetectLiveFaceByFileRequestBody DetectLiveFaceByFileRequest::getBody() const
{
    return body_;
}

void DetectLiveFaceByFileRequest::setBody(const DetectLiveFaceByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveFaceByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveFaceByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


