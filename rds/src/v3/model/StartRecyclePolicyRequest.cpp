

#include "huaweicloud/rds/v3/model/StartRecyclePolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartRecyclePolicyRequest::StartRecyclePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

StartRecyclePolicyRequest::~StartRecyclePolicyRequest() = default;

void StartRecyclePolicyRequest::validate()
{
}

web::json::value StartRecyclePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool StartRecyclePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecyclePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string StartRecyclePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartRecyclePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartRecyclePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartRecyclePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RecyclePolicyRequestBody StartRecyclePolicyRequest::getBody() const
{
    return body_;
}

void StartRecyclePolicyRequest::setBody(const RecyclePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartRecyclePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartRecyclePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


