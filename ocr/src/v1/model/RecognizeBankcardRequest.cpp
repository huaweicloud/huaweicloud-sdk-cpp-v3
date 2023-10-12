

#include "huaweicloud/ocr/v1/model/RecognizeBankcardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankcardRequest::RecognizeBankcardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeBankcardRequest::~RecognizeBankcardRequest() = default;

void RecognizeBankcardRequest::validate()
{
}

web::json::value RecognizeBankcardRequest::toJson() const
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
bool RecognizeBankcardRequest::fromJson(const web::json::value& val)
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
            BankcardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeBankcardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeBankcardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeBankcardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeBankcardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

BankcardRequestBody RecognizeBankcardRequest::getBody() const
{
    return body_;
}

void RecognizeBankcardRequest::setBody(const BankcardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeBankcardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeBankcardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


