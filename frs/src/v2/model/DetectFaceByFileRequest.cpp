

#include "huaweicloud/frs/v2/model/DetectFaceByFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileRequest::DetectFaceByFileRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectFaceByFileRequest::~DetectFaceByFileRequest() = default;

void DetectFaceByFileRequest::validate()
{
}

web::json::value DetectFaceByFileRequest::toJson() const
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
bool DetectFaceByFileRequest::fromJson(const web::json::value& val)
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
            DetectFaceByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectFaceByFileRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectFaceByFileRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectFaceByFileRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectFaceByFileRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DetectFaceByFileRequestBody DetectFaceByFileRequest::getBody() const
{
    return body_;
}

void DetectFaceByFileRequest::setBody(const DetectFaceByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectFaceByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectFaceByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


