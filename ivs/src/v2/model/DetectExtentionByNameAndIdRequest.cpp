

#include "huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectExtentionByNameAndIdRequest::DetectExtentionByNameAndIdRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectExtentionByNameAndIdRequest::~DetectExtentionByNameAndIdRequest() = default;

void DetectExtentionByNameAndIdRequest::validate()
{
}

web::json::value DetectExtentionByNameAndIdRequest::toJson() const
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

bool DetectExtentionByNameAndIdRequest::fromJson(const web::json::value& val)
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
            IvsExtentionByNameAndIdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DetectExtentionByNameAndIdRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectExtentionByNameAndIdRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectExtentionByNameAndIdRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectExtentionByNameAndIdRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

IvsExtentionByNameAndIdRequestBody DetectExtentionByNameAndIdRequest::getBody() const
{
    return body_;
}

void DetectExtentionByNameAndIdRequest::setBody(const IvsExtentionByNameAndIdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectExtentionByNameAndIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectExtentionByNameAndIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


