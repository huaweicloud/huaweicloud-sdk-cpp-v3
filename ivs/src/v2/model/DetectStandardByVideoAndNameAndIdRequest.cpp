

#include "huaweicloud/ivs/v2/model/DetectStandardByVideoAndNameAndIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByVideoAndNameAndIdRequest::DetectStandardByVideoAndNameAndIdRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetectStandardByVideoAndNameAndIdRequest::~DetectStandardByVideoAndNameAndIdRequest() = default;

void DetectStandardByVideoAndNameAndIdRequest::validate()
{
}

web::json::value DetectStandardByVideoAndNameAndIdRequest::toJson() const
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
bool DetectStandardByVideoAndNameAndIdRequest::fromJson(const web::json::value& val)
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
            IvsStandardByVideoAndNameAndIdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetectStandardByVideoAndNameAndIdRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DetectStandardByVideoAndNameAndIdRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DetectStandardByVideoAndNameAndIdRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DetectStandardByVideoAndNameAndIdRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

IvsStandardByVideoAndNameAndIdRequestBody DetectStandardByVideoAndNameAndIdRequest::getBody() const
{
    return body_;
}

void DetectStandardByVideoAndNameAndIdRequest::setBody(const IvsStandardByVideoAndNameAndIdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectStandardByVideoAndNameAndIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectStandardByVideoAndNameAndIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


