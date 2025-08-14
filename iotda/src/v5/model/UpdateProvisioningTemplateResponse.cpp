

#include "huaweicloud/iotda/v5/model/UpdateProvisioningTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProvisioningTemplateResponse::UpdateProvisioningTemplateResponse()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    templateBodyIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

UpdateProvisioningTemplateResponse::~UpdateProvisioningTemplateResponse() = default;

void UpdateProvisioningTemplateResponse::validate()
{
}

web::json::value UpdateProvisioningTemplateResponse::toJson() const
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
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool UpdateProvisioningTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_body"));
        if(!fieldValue.is_null())
        {
            ProvisioningTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
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


std::string UpdateProvisioningTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void UpdateProvisioningTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateProvisioningTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string UpdateProvisioningTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void UpdateProvisioningTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void UpdateProvisioningTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string UpdateProvisioningTemplateResponse::getDescription() const
{
    return description_;
}

void UpdateProvisioningTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProvisioningTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ProvisioningTemplateBody UpdateProvisioningTemplateResponse::getTemplateBody() const
{
    return templateBody_;
}

void UpdateProvisioningTemplateResponse::setTemplateBody(const ProvisioningTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void UpdateProvisioningTemplateResponse::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

std::string UpdateProvisioningTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateProvisioningTemplateResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateProvisioningTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateProvisioningTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateProvisioningTemplateResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateProvisioningTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateProvisioningTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


