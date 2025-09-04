

#include "huaweicloud/iotda/v5/model/ShowDeviceAuthenticationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceAuthenticationTemplateResponse::ShowDeviceAuthenticationTemplateResponse()
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
    templateBodyIsSet_ = false;
}

ShowDeviceAuthenticationTemplateResponse::~ShowDeviceAuthenticationTemplateResponse() = default;

void ShowDeviceAuthenticationTemplateResponse::validate()
{
}

web::json::value ShowDeviceAuthenticationTemplateResponse::toJson() const
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
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }

    return val;
}
bool ShowDeviceAuthenticationTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_body"));
        if(!fieldValue.is_null())
        {
            AuthenticationTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceAuthenticationTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void ShowDeviceAuthenticationTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void ShowDeviceAuthenticationTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDeviceAuthenticationTemplateResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowDeviceAuthenticationTemplateResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateResponse::getDescription() const
{
    return description_;
}

void ShowDeviceAuthenticationTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateResponse::getStatus() const
{
    return status_;
}

void ShowDeviceAuthenticationTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AuthenticationTemplateBody ShowDeviceAuthenticationTemplateResponse::getTemplateBody() const
{
    return templateBody_;
}

void ShowDeviceAuthenticationTemplateResponse::setTemplateBody(const AuthenticationTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateResponse::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void ShowDeviceAuthenticationTemplateResponse::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


