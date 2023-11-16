

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplatesRequestBody::CreateTemplatesRequestBody()
{
    templateIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    toolType_ = "";
    toolTypeIsSet_ = false;
    parametersIsSet_ = false;
}

CreateTemplatesRequestBody::~CreateTemplatesRequestBody() = default;

void CreateTemplatesRequestBody::validate()
{
}

web::json::value CreateTemplatesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(toolTypeIsSet_) {
        val[utility::conversions::to_string_t("tool_type")] = ModelBase::toJson(toolType_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}
bool CreateTemplatesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            CreateTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateBuildJobParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}


CreateTemplate CreateTemplatesRequestBody::getTemplate() const
{
    return template_;
}

void CreateTemplatesRequestBody::setTemplate(const CreateTemplate& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool CreateTemplatesRequestBody::templateIsSet() const
{
    return templateIsSet_;
}

void CreateTemplatesRequestBody::unsettemplate()
{
    templateIsSet_ = false;
}

std::string CreateTemplatesRequestBody::getName() const
{
    return name_;
}

void CreateTemplatesRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTemplatesRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTemplatesRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTemplatesRequestBody::getDescription() const
{
    return description_;
}

void CreateTemplatesRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateTemplatesRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateTemplatesRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateTemplatesRequestBody::getToolType() const
{
    return toolType_;
}

void CreateTemplatesRequestBody::setToolType(const std::string& value)
{
    toolType_ = value;
    toolTypeIsSet_ = true;
}

bool CreateTemplatesRequestBody::toolTypeIsSet() const
{
    return toolTypeIsSet_;
}

void CreateTemplatesRequestBody::unsettoolType()
{
    toolTypeIsSet_ = false;
}

std::vector<CreateBuildJobParameter>& CreateTemplatesRequestBody::getParameters()
{
    return parameters_;
}

void CreateTemplatesRequestBody::setParameters(const std::vector<CreateBuildJobParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateTemplatesRequestBody::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateTemplatesRequestBody::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


