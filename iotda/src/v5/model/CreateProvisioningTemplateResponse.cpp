

#include "huaweicloud/iotda/v5/model/CreateProvisioningTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProvisioningTemplateResponse::CreateProvisioningTemplateResponse()
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

CreateProvisioningTemplateResponse::~CreateProvisioningTemplateResponse() = default;

void CreateProvisioningTemplateResponse::validate()
{
}

web::json::value CreateProvisioningTemplateResponse::toJson() const
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
bool CreateProvisioningTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreateProvisioningTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateProvisioningTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateProvisioningTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateProvisioningTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void CreateProvisioningTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateProvisioningTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateProvisioningTemplateResponse::getDescription() const
{
    return description_;
}

void CreateProvisioningTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProvisioningTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

ProvisioningTemplateBody CreateProvisioningTemplateResponse::getTemplateBody() const
{
    return templateBody_;
}

void CreateProvisioningTemplateResponse::setTemplateBody(const ProvisioningTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void CreateProvisioningTemplateResponse::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

std::string CreateProvisioningTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void CreateProvisioningTemplateResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateProvisioningTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateProvisioningTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateProvisioningTemplateResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateProvisioningTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateProvisioningTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


