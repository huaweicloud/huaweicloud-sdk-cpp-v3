

#include "huaweicloud/iotda/v5/model/ProvisioningTemplateSimple.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ProvisioningTemplateSimple::ProvisioningTemplateSimple()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

ProvisioningTemplateSimple::~ProvisioningTemplateSimple() = default;

void ProvisioningTemplateSimple::validate()
{
}

web::json::value ProvisioningTemplateSimple::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ProvisioningTemplateSimple::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ProvisioningTemplateSimple::getTemplateId() const
{
    return templateId_;
}

void ProvisioningTemplateSimple::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ProvisioningTemplateSimple::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ProvisioningTemplateSimple::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ProvisioningTemplateSimple::getTemplateName() const
{
    return templateName_;
}

void ProvisioningTemplateSimple::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ProvisioningTemplateSimple::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ProvisioningTemplateSimple::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ProvisioningTemplateSimple::getDescription() const
{
    return description_;
}

void ProvisioningTemplateSimple::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProvisioningTemplateSimple::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProvisioningTemplateSimple::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ProvisioningTemplateSimple::getCreateTime() const
{
    return createTime_;
}

void ProvisioningTemplateSimple::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ProvisioningTemplateSimple::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ProvisioningTemplateSimple::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ProvisioningTemplateSimple::getUpdateTime() const
{
    return updateTime_;
}

void ProvisioningTemplateSimple::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ProvisioningTemplateSimple::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ProvisioningTemplateSimple::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


