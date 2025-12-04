

#include "huaweicloud/rds/v3/model/CompareConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CompareConfigurationRequest::CompareConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CompareConfigurationRequest::~CompareConfigurationRequest() = default;

void CompareConfigurationRequest::validate()
{
}

web::json::value CompareConfigurationRequest::toJson() const
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
bool CompareConfigurationRequest::fromJson(const web::json::value& val)
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
            CompareConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CompareConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CompareConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CompareConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CompareConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CompareConfigurationRequestBody CompareConfigurationRequest::getBody() const
{
    return body_;
}

void CompareConfigurationRequest::setBody(const CompareConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CompareConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CompareConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


