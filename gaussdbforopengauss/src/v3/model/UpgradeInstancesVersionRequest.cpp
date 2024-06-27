

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeInstancesVersionRequest::UpgradeInstancesVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeInstancesVersionRequest::~UpgradeInstancesVersionRequest() = default;

void UpgradeInstancesVersionRequest::validate()
{
}

web::json::value UpgradeInstancesVersionRequest::toJson() const
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
bool UpgradeInstancesVersionRequest::fromJson(const web::json::value& val)
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
            GaussDBUpgradeInstancesVersionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeInstancesVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeInstancesVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeInstancesVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeInstancesVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

GaussDBUpgradeInstancesVersionRequest UpgradeInstancesVersionRequest::getBody() const
{
    return body_;
}

void UpgradeInstancesVersionRequest::setBody(const GaussDBUpgradeInstancesVersionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeInstancesVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeInstancesVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


