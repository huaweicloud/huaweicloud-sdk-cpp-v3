

#include "huaweicloud/codeartspipeline/v2/model/PipelineByTemplateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineByTemplateDTO::PipelineByTemplateDTO()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    sourcesIsSet_ = false;
    securityLevel_ = 0;
    securityLevelIsSet_ = false;
    confidentialityCode_ = "";
    confidentialityCodeIsSet_ = false;
    variablesIsSet_ = false;
}

PipelineByTemplateDTO::~PipelineByTemplateDTO() = default;

void PipelineByTemplateDTO::validate()
{
}

web::json::value PipelineByTemplateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }
    if(confidentialityCodeIsSet_) {
        val[utility::conversions::to_string_t("confidentiality_code")] = ModelBase::toJson(confidentialityCode_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }

    return val;
}
bool PipelineByTemplateDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_publish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<CodeSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidentiality_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidentiality_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidentialityCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineByTemplateDTO_variables> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    return ok;
}


std::string PipelineByTemplateDTO::getName() const
{
    return name_;
}

void PipelineByTemplateDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineByTemplateDTO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineByTemplateDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineByTemplateDTO::getDescription() const
{
    return description_;
}

void PipelineByTemplateDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineByTemplateDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineByTemplateDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool PipelineByTemplateDTO::isIsPublish() const
{
    return isPublish_;
}

void PipelineByTemplateDTO::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool PipelineByTemplateDTO::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void PipelineByTemplateDTO::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::vector<CodeSource>& PipelineByTemplateDTO::getSources()
{
    return sources_;
}

void PipelineByTemplateDTO::setSources(const std::vector<CodeSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool PipelineByTemplateDTO::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void PipelineByTemplateDTO::unsetsources()
{
    sourcesIsSet_ = false;
}

int32_t PipelineByTemplateDTO::getSecurityLevel() const
{
    return securityLevel_;
}

void PipelineByTemplateDTO::setSecurityLevel(int32_t value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool PipelineByTemplateDTO::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void PipelineByTemplateDTO::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

std::string PipelineByTemplateDTO::getConfidentialityCode() const
{
    return confidentialityCode_;
}

void PipelineByTemplateDTO::setConfidentialityCode(const std::string& value)
{
    confidentialityCode_ = value;
    confidentialityCodeIsSet_ = true;
}

bool PipelineByTemplateDTO::confidentialityCodeIsSet() const
{
    return confidentialityCodeIsSet_;
}

void PipelineByTemplateDTO::unsetconfidentialityCode()
{
    confidentialityCodeIsSet_ = false;
}

std::vector<PipelineByTemplateDTO_variables>& PipelineByTemplateDTO::getVariables()
{
    return variables_;
}

void PipelineByTemplateDTO::setVariables(const std::vector<PipelineByTemplateDTO_variables>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool PipelineByTemplateDTO::variablesIsSet() const
{
    return variablesIsSet_;
}

void PipelineByTemplateDTO::unsetvariables()
{
    variablesIsSet_ = false;
}

}
}
}
}
}


