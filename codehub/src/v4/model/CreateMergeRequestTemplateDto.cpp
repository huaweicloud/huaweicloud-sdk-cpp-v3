

#include "huaweicloud/codehub/v4/model/CreateMergeRequestTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestTemplateDto::CreateMergeRequestTemplateDto()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    mergeRequestTitle_ = "";
    mergeRequestTitleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    autoExtractMrTitle_ = 0;
    autoExtractMrTitleIsSet_ = false;
    isWip_ = false;
    isWipIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
}

CreateMergeRequestTemplateDto::~CreateMergeRequestTemplateDto() = default;

void CreateMergeRequestTemplateDto::validate()
{
}

web::json::value CreateMergeRequestTemplateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(mergeRequestTitleIsSet_) {
        val[utility::conversions::to_string_t("merge_request_title")] = ModelBase::toJson(mergeRequestTitle_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(autoExtractMrTitleIsSet_) {
        val[utility::conversions::to_string_t("auto_extract_mr_title")] = ModelBase::toJson(autoExtractMrTitle_);
    }
    if(isWipIsSet_) {
        val[utility::conversions::to_string_t("is_wip")] = ModelBase::toJson(isWip_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }

    return val;
}
bool CreateMergeRequestTemplateDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_extract_mr_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_extract_mr_title"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExtractMrTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_wip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_wip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    return ok;
}


std::string CreateMergeRequestTemplateDto::getTemplateName() const
{
    return templateName_;
}

void CreateMergeRequestTemplateDto::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateMergeRequestTemplateDto::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateMergeRequestTemplateDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void CreateMergeRequestTemplateDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void CreateMergeRequestTemplateDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

std::string CreateMergeRequestTemplateDto::getDescription() const
{
    return description_;
}

void CreateMergeRequestTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateMergeRequestTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CreateMergeRequestTemplateDto::getAutoExtractMrTitle() const
{
    return autoExtractMrTitle_;
}

void CreateMergeRequestTemplateDto::setAutoExtractMrTitle(int32_t value)
{
    autoExtractMrTitle_ = value;
    autoExtractMrTitleIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::autoExtractMrTitleIsSet() const
{
    return autoExtractMrTitleIsSet_;
}

void CreateMergeRequestTemplateDto::unsetautoExtractMrTitle()
{
    autoExtractMrTitleIsSet_ = false;
}

bool CreateMergeRequestTemplateDto::isIsWip() const
{
    return isWip_;
}

void CreateMergeRequestTemplateDto::setIsWip(bool value)
{
    isWip_ = value;
    isWipIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::isWipIsSet() const
{
    return isWipIsSet_;
}

void CreateMergeRequestTemplateDto::unsetisWip()
{
    isWipIsSet_ = false;
}

bool CreateMergeRequestTemplateDto::isIsDefault() const
{
    return isDefault_;
}

void CreateMergeRequestTemplateDto::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool CreateMergeRequestTemplateDto::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void CreateMergeRequestTemplateDto::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

}
}
}
}
}


