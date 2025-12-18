

#include "huaweicloud/gaussdbforopengauss/v3/model/SaveAsParameterConfigTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SaveAsParameterConfigTemplateRequest::SaveAsParameterConfigTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveAsParameterConfigTemplateRequest::~SaveAsParameterConfigTemplateRequest() = default;

void SaveAsParameterConfigTemplateRequest::validate()
{
}

web::json::value SaveAsParameterConfigTemplateRequest::toJson() const
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
bool SaveAsParameterConfigTemplateRequest::fromJson(const web::json::value& val)
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
            SaveAsParameterConfigTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveAsParameterConfigTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void SaveAsParameterConfigTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SaveAsParameterConfigTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SaveAsParameterConfigTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SaveAsParameterConfigTemplateRequest::getConfigId() const
{
    return configId_;
}

void SaveAsParameterConfigTemplateRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool SaveAsParameterConfigTemplateRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void SaveAsParameterConfigTemplateRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

SaveAsParameterConfigTemplateRequestBody SaveAsParameterConfigTemplateRequest::getBody() const
{
    return body_;
}

void SaveAsParameterConfigTemplateRequest::setBody(const SaveAsParameterConfigTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveAsParameterConfigTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveAsParameterConfigTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


