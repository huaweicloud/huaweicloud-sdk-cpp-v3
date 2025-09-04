

#include "huaweicloud/iotda/v5/model/CreateDeviceAuthenticationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceAuthenticationTemplateResponse::CreateDeviceAuthenticationTemplateResponse()
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

CreateDeviceAuthenticationTemplateResponse::~CreateDeviceAuthenticationTemplateResponse() = default;

void CreateDeviceAuthenticationTemplateResponse::validate()
{
}

web::json::value CreateDeviceAuthenticationTemplateResponse::toJson() const
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
bool CreateDeviceAuthenticationTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreateDeviceAuthenticationTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateDeviceAuthenticationTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateDeviceAuthenticationTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void CreateDeviceAuthenticationTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateDeviceAuthenticationTemplateResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDeviceAuthenticationTemplateResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDeviceAuthenticationTemplateResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateDeviceAuthenticationTemplateResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateDeviceAuthenticationTemplateResponse::getDescription() const
{
    return description_;
}

void CreateDeviceAuthenticationTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDeviceAuthenticationTemplateResponse::getStatus() const
{
    return status_;
}

void CreateDeviceAuthenticationTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

AuthenticationTemplateBody CreateDeviceAuthenticationTemplateResponse::getTemplateBody() const
{
    return templateBody_;
}

void CreateDeviceAuthenticationTemplateResponse::setTemplateBody(const AuthenticationTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateResponse::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void CreateDeviceAuthenticationTemplateResponse::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


