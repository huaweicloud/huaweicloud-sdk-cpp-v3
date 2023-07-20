

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateConfigurationTemplateRequest::CreateConfigurationTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateConfigurationTemplateRequest::~CreateConfigurationTemplateRequest() = default;

void CreateConfigurationTemplateRequest::validate()
{
}

web::json::value CreateConfigurationTemplateRequest::toJson() const
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

bool CreateConfigurationTemplateRequest::fromJson(const web::json::value& val)
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
            CreateConfigurationTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateConfigurationTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateConfigurationTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateConfigurationTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateConfigurationTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateConfigurationTemplateRequestBody CreateConfigurationTemplateRequest::getBody() const
{
    return body_;
}

void CreateConfigurationTemplateRequest::setBody(const CreateConfigurationTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateConfigurationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateConfigurationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


