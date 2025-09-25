

#include "huaweicloud/codehub/v4/model/WebhookLogDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




WebhookLogDto::WebhookLogDto()
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
}

WebhookLogDto::~WebhookLogDto() = default;

void WebhookLogDto::validate()
{
}

web::json::value WebhookLogDto::toJson() const
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

    return val;
}
bool WebhookLogDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t WebhookLogDto::getId() const
{
    return id_;
}

void WebhookLogDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WebhookLogDto::idIsSet() const
{
    return idIsSet_;
}

void WebhookLogDto::unsetid()
{
    idIsSet_ = false;
}

int32_t WebhookLogDto::getWebHookId() const
{
    return webHookId_;
}

void WebhookLogDto::setWebHookId(int32_t value)
{
    webHookId_ = value;
    webHookIdIsSet_ = true;
}

bool WebhookLogDto::webHookIdIsSet() const
{
    return webHookIdIsSet_;
}

void WebhookLogDto::unsetwebHookId()
{
    webHookIdIsSet_ = false;
}

std::string WebhookLogDto::getTrigger() const
{
    return trigger_;
}

void WebhookLogDto::setTrigger(const std::string& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool WebhookLogDto::triggerIsSet() const
{
    return triggerIsSet_;
}

void WebhookLogDto::unsettrigger()
{
    triggerIsSet_ = false;
}

std::string WebhookLogDto::getUrl() const
{
    return url_;
}

void WebhookLogDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebhookLogDto::urlIsSet() const
{
    return urlIsSet_;
}

void WebhookLogDto::unseturl()
{
    urlIsSet_ = false;
}

std::string WebhookLogDto::getResponseStatus() const
{
    return responseStatus_;
}

void WebhookLogDto::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool WebhookLogDto::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void WebhookLogDto::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

double WebhookLogDto::getExecutionDuration() const
{
    return executionDuration_;
}

void WebhookLogDto::setExecutionDuration(double value)
{
    executionDuration_ = value;
    executionDurationIsSet_ = true;
}

bool WebhookLogDto::executionDurationIsSet() const
{
    return executionDurationIsSet_;
}

void WebhookLogDto::unsetexecutionDuration()
{
    executionDurationIsSet_ = false;
}

std::string WebhookLogDto::getUuid() const
{
    return uuid_;
}

void WebhookLogDto::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool WebhookLogDto::uuidIsSet() const
{
    return uuidIsSet_;
}

void WebhookLogDto::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string WebhookLogDto::getCreatedAt() const
{
    return createdAt_;
}

void WebhookLogDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WebhookLogDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WebhookLogDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WebhookLogDto::getUpdatedAt() const
{
    return updatedAt_;
}

void WebhookLogDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool WebhookLogDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void WebhookLogDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


