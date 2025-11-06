

#include "huaweicloud/codeartsrepo/v4/model/WebhookLogExtendDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WebhookLogExtendDto::WebhookLogExtendDto()
{
    id_ = 0;
    idIsSet_ = false;
    webHookId_ = 0;
    webHookIdIsSet_ = false;
    trigger_ = "";
    triggerIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    responseStatus_ = "";
    responseStatusIsSet_ = false;
    executionDuration_ = 0.0;
    executionDurationIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    repositoryIsSet_ = false;
}

WebhookLogExtendDto::~WebhookLogExtendDto() = default;

void WebhookLogExtendDto::validate()
{
}

web::json::value WebhookLogExtendDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(webHookIdIsSet_) {
        val[utility::conversions::to_string_t("web_hook_id")] = ModelBase::toJson(webHookId_);
    }
    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(responseStatusIsSet_) {
        val[utility::conversions::to_string_t("response_status")] = ModelBase::toJson(responseStatus_);
    }
    if(executionDurationIsSet_) {
        val[utility::conversions::to_string_t("execution_duration")] = ModelBase::toJson(executionDuration_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }

    return val;
}
bool WebhookLogExtendDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_hook_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebHookId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_duration"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            WebhookRepositoryDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    return ok;
}


int32_t WebhookLogExtendDto::getId() const
{
    return id_;
}

void WebhookLogExtendDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WebhookLogExtendDto::idIsSet() const
{
    return idIsSet_;
}

void WebhookLogExtendDto::unsetid()
{
    idIsSet_ = false;
}

int32_t WebhookLogExtendDto::getWebHookId() const
{
    return webHookId_;
}

void WebhookLogExtendDto::setWebHookId(int32_t value)
{
    webHookId_ = value;
    webHookIdIsSet_ = true;
}

bool WebhookLogExtendDto::webHookIdIsSet() const
{
    return webHookIdIsSet_;
}

void WebhookLogExtendDto::unsetwebHookId()
{
    webHookIdIsSet_ = false;
}

std::string WebhookLogExtendDto::getTrigger() const
{
    return trigger_;
}

void WebhookLogExtendDto::setTrigger(const std::string& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool WebhookLogExtendDto::triggerIsSet() const
{
    return triggerIsSet_;
}

void WebhookLogExtendDto::unsettrigger()
{
    triggerIsSet_ = false;
}

std::string WebhookLogExtendDto::getUrl() const
{
    return url_;
}

void WebhookLogExtendDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebhookLogExtendDto::urlIsSet() const
{
    return urlIsSet_;
}

void WebhookLogExtendDto::unseturl()
{
    urlIsSet_ = false;
}

std::string WebhookLogExtendDto::getResponseStatus() const
{
    return responseStatus_;
}

void WebhookLogExtendDto::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool WebhookLogExtendDto::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void WebhookLogExtendDto::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

double WebhookLogExtendDto::getExecutionDuration() const
{
    return executionDuration_;
}

void WebhookLogExtendDto::setExecutionDuration(double value)
{
    executionDuration_ = value;
    executionDurationIsSet_ = true;
}

bool WebhookLogExtendDto::executionDurationIsSet() const
{
    return executionDurationIsSet_;
}

void WebhookLogExtendDto::unsetexecutionDuration()
{
    executionDurationIsSet_ = false;
}

std::string WebhookLogExtendDto::getUuid() const
{
    return uuid_;
}

void WebhookLogExtendDto::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool WebhookLogExtendDto::uuidIsSet() const
{
    return uuidIsSet_;
}

void WebhookLogExtendDto::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string WebhookLogExtendDto::getCreatedAt() const
{
    return createdAt_;
}

void WebhookLogExtendDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WebhookLogExtendDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WebhookLogExtendDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WebhookLogExtendDto::getUpdatedAt() const
{
    return updatedAt_;
}

void WebhookLogExtendDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool WebhookLogExtendDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void WebhookLogExtendDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

WebhookRepositoryDto WebhookLogExtendDto::getRepository() const
{
    return repository_;
}

void WebhookLogExtendDto::setRepository(const WebhookRepositoryDto& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool WebhookLogExtendDto::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void WebhookLogExtendDto::unsetrepository()
{
    repositoryIsSet_ = false;
}

}
}
}
}
}


