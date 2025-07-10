

#include "huaweicloud/rgc/v1/model/CreateTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateTemplateRequestBody::CreateTemplateRequestBody()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    templateDescription_ = "";
    templateDescriptionIsSet_ = false;
    templateBody_ = "";
    templateBodyIsSet_ = false;
}

CreateTemplateRequestBody::~CreateTemplateRequestBody() = default;

void CreateTemplateRequestBody::validate()
{
}

web::json::value CreateTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(templateDescriptionIsSet_) {
        val[utility::conversions::to_string_t("template_description")] = ModelBase::toJson(templateDescription_);
    }
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }

    return val;
}
bool CreateTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateRequestBody::getTemplateName() const
{
    return templateName_;
}

void CreateTemplateRequestBody::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateTemplateRequestBody::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateTemplateRequestBody::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateTemplateRequestBody::getTemplateType() const
{
    return templateType_;
}

void CreateTemplateRequestBody::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool CreateTemplateRequestBody::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void CreateTemplateRequestBody::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string CreateTemplateRequestBody::getTemplateDescription() const
{
    return templateDescription_;
}

void CreateTemplateRequestBody::setTemplateDescription(const std::string& value)
{
    templateDescription_ = value;
    templateDescriptionIsSet_ = true;
}

bool CreateTemplateRequestBody::templateDescriptionIsSet() const
{
    return templateDescriptionIsSet_;
}

void CreateTemplateRequestBody::unsettemplateDescription()
{
    templateDescriptionIsSet_ = false;
}

std::string CreateTemplateRequestBody::getTemplateBody() const
{
    return templateBody_;
}

void CreateTemplateRequestBody::setTemplateBody(const std::string& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool CreateTemplateRequestBody::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void CreateTemplateRequestBody::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


