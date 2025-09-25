

#include "huaweicloud/codeartspipeline/v2/model/PipelineTemplateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineTemplateDTO::PipelineTemplateDTO()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    variablesIsSet_ = false;
    definition_ = "";
    definitionIsSet_ = false;
    isSystem_ = false;
    isSystemIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    isShowSource_ = false;
    isShowSourceIsSet_ = false;
}

PipelineTemplateDTO::~PipelineTemplateDTO() = default;

void PipelineTemplateDTO::validate()
{
}

web::json::value PipelineTemplateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }
    if(isSystemIsSet_) {
        val[utility::conversions::to_string_t("is_system")] = ModelBase::toJson(isSystem_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(isShowSourceIsSet_) {
        val[utility::conversions::to_string_t("is_show_source")] = ModelBase::toJson(isShowSource_);
    }

    return val;
}
bool PipelineTemplateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_source"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShowSource(refVal);
        }
    }
    return ok;
}


std::string PipelineTemplateDTO::getName() const
{
    return name_;
}

void PipelineTemplateDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineTemplateDTO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineTemplateDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineTemplateDTO::getDescription() const
{
    return description_;
}

void PipelineTemplateDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineTemplateDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineTemplateDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PipelineTemplateDTO::getLanguage() const
{
    return language_;
}

void PipelineTemplateDTO::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PipelineTemplateDTO::languageIsSet() const
{
    return languageIsSet_;
}

void PipelineTemplateDTO::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<CustomVariable>& PipelineTemplateDTO::getVariables()
{
    return variables_;
}

void PipelineTemplateDTO::setVariables(const std::vector<CustomVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool PipelineTemplateDTO::variablesIsSet() const
{
    return variablesIsSet_;
}

void PipelineTemplateDTO::unsetvariables()
{
    variablesIsSet_ = false;
}

std::string PipelineTemplateDTO::getDefinition() const
{
    return definition_;
}

void PipelineTemplateDTO::setDefinition(const std::string& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool PipelineTemplateDTO::definitionIsSet() const
{
    return definitionIsSet_;
}

void PipelineTemplateDTO::unsetdefinition()
{
    definitionIsSet_ = false;
}

bool PipelineTemplateDTO::isIsSystem() const
{
    return isSystem_;
}

void PipelineTemplateDTO::setIsSystem(bool value)
{
    isSystem_ = value;
    isSystemIsSet_ = true;
}

bool PipelineTemplateDTO::isSystemIsSet() const
{
    return isSystemIsSet_;
}

void PipelineTemplateDTO::unsetisSystem()
{
    isSystemIsSet_ = false;
}

std::string PipelineTemplateDTO::getDomainId() const
{
    return domainId_;
}

void PipelineTemplateDTO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PipelineTemplateDTO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PipelineTemplateDTO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

bool PipelineTemplateDTO::isIsShowSource() const
{
    return isShowSource_;
}

void PipelineTemplateDTO::setIsShowSource(bool value)
{
    isShowSource_ = value;
    isShowSourceIsSet_ = true;
}

bool PipelineTemplateDTO::isShowSourceIsSet() const
{
    return isShowSourceIsSet_;
}

void PipelineTemplateDTO::unsetisShowSource()
{
    isShowSourceIsSet_ = false;
}

}
}
}
}
}


