

#include "huaweicloud/rgc/v1/model/CreateTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateTemplateResponse::CreateTemplateResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateVersion_ = "";
    templateVersionIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
}

CreateTemplateResponse::~CreateTemplateResponse() = default;

void CreateTemplateResponse::validate()
{
}

web::json::value CreateTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateVersionIsSet_) {
        val[utility::conversions::to_string_t("template_version")] = ModelBase::toJson(templateVersion_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }

    return val;
}
bool CreateTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateTemplateResponse::getTemplateVersion() const
{
    return templateVersion_;
}

void CreateTemplateResponse::setTemplateVersion(const std::string& value)
{
    templateVersion_ = value;
    templateVersionIsSet_ = true;
}

bool CreateTemplateResponse::templateVersionIsSet() const
{
    return templateVersionIsSet_;
}

void CreateTemplateResponse::unsettemplateVersion()
{
    templateVersionIsSet_ = false;
}

std::string CreateTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void CreateTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

}
}
}
}
}


