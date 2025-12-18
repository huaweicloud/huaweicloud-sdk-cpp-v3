

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyParameterConfigTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyParameterConfigTemplateRequest::ModifyParameterConfigTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyParameterConfigTemplateRequest::~ModifyParameterConfigTemplateRequest() = default;

void ModifyParameterConfigTemplateRequest::validate()
{
}

web::json::value ModifyParameterConfigTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyParameterConfigTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyParameterConfigTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyParameterConfigTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyParameterConfigTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyParameterConfigTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyParameterConfigTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyParameterConfigTemplateRequest::getConfigId() const
{
    return configId_;
}

void ModifyParameterConfigTemplateRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ModifyParameterConfigTemplateRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ModifyParameterConfigTemplateRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ModifyParameterConfigTemplateRequestBody ModifyParameterConfigTemplateRequest::getBody() const
{
    return body_;
}

void ModifyParameterConfigTemplateRequest::setBody(const ModifyParameterConfigTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyParameterConfigTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyParameterConfigTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


