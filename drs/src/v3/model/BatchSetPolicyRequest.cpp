

#include "huaweicloud/drs/v3/model/BatchSetPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetPolicyRequest::BatchSetPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetPolicyRequest::~BatchSetPolicyRequest() = default;

void BatchSetPolicyRequest::validate()
{
}

web::json::value BatchSetPolicyRequest::toJson() const
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
bool BatchSetPolicyRequest::fromJson(const web::json::value& val)
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
            BatchSetupSyncPolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSetPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchSetupSyncPolicyReq BatchSetPolicyRequest::getBody() const
{
    return body_;
}

void BatchSetPolicyRequest::setBody(const BatchSetupSyncPolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


