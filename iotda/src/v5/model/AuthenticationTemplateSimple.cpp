

#include "huaweicloud/iotda/v5/model/AuthenticationTemplateSimple.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthenticationTemplateSimple::AuthenticationTemplateSimple()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AuthenticationTemplateSimple::~AuthenticationTemplateSimple() = default;

void AuthenticationTemplateSimple::validate()
{
}

web::json::value AuthenticationTemplateSimple::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AuthenticationTemplateSimple::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AuthenticationTemplateSimple::getTemplateId() const
{
    return templateId_;
}

void AuthenticationTemplateSimple::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool AuthenticationTemplateSimple::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void AuthenticationTemplateSimple::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string AuthenticationTemplateSimple::getTemplateName() const
{
    return templateName_;
}

void AuthenticationTemplateSimple::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool AuthenticationTemplateSimple::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void AuthenticationTemplateSimple::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string AuthenticationTemplateSimple::getCreateTime() const
{
    return createTime_;
}

void AuthenticationTemplateSimple::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AuthenticationTemplateSimple::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AuthenticationTemplateSimple::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AuthenticationTemplateSimple::getUpdateTime() const
{
    return updateTime_;
}

void AuthenticationTemplateSimple::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AuthenticationTemplateSimple::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AuthenticationTemplateSimple::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AuthenticationTemplateSimple::getDescription() const
{
    return description_;
}

void AuthenticationTemplateSimple::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AuthenticationTemplateSimple::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AuthenticationTemplateSimple::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AuthenticationTemplateSimple::getStatus() const
{
    return status_;
}

void AuthenticationTemplateSimple::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuthenticationTemplateSimple::statusIsSet() const
{
    return statusIsSet_;
}

void AuthenticationTemplateSimple::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


