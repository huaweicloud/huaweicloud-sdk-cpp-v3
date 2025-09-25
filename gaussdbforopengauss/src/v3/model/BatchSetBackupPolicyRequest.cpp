

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchSetBackupPolicyRequest::BatchSetBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetBackupPolicyRequest::~BatchSetBackupPolicyRequest() = default;

void BatchSetBackupPolicyRequest::validate()
{
}

web::json::value BatchSetBackupPolicyRequest::toJson() const
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
bool BatchSetBackupPolicyRequest::fromJson(const web::json::value& val)
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
            BatchSetBackupPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSetBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchSetBackupPolicyRequestBody BatchSetBackupPolicyRequest::getBody() const
{
    return body_;
}

void BatchSetBackupPolicyRequest::setBody(const BatchSetBackupPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


