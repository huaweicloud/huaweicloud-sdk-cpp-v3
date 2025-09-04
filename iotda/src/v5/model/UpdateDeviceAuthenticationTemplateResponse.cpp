

#include "huaweicloud/iotda/v5/model/UpdateDeviceAuthenticationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceAuthenticationTemplateResponse::UpdateDeviceAuthenticationTemplateResponse()
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

UpdateDeviceAuthenticationTemplateResponse::~UpdateDeviceAuthenticationTemplateResponse() = default;

void UpdateDeviceAuthenticationTemplateResponse::validate()
{
}

web::json::value UpdateDeviceAuthenticationTemplateResponse::toJson() const
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
bool UpdateDeviceAuthenticationTemplateResponse::fromJson(const web::json::value& val)
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


std::string UpdateDeviceAuthenticationTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void UpdateDeviceAuthenticationTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void UpdateDeviceAuthenticationTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateDeviceAuthenticationTemplateResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateDeviceAuthenticationTemplateResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateResponse::getDescription() const
{
    return description_;
}

void UpdateDeviceAuthenticationTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateResponse::getStatus() const
{
    return status_;
}

void UpdateDeviceAuthenticationTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AuthenticationTemplateBody UpdateDeviceAuthenticationTemplateResponse::getTemplateBody() const
{
    return templateBody_;
}

void UpdateDeviceAuthenticationTemplateResponse::setTemplateBody(const AuthenticationTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateResponse::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void UpdateDeviceAuthenticationTemplateResponse::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


