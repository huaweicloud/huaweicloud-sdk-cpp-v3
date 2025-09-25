

#include "huaweicloud/codehub/v4/model/ShowProjectWebhookLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectWebhookLogResponse::ShowProjectWebhookLogResponse()
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
    requestHeadersIsSet_ = false;
    requestDataIsSet_ = false;
    responseHeadersIsSet_ = false;
    responseBodyIsSet_ = false;
}

ShowProjectWebhookLogResponse::~ShowProjectWebhookLogResponse() = default;

void ShowProjectWebhookLogResponse::validate()
{
}

web::json::value ShowProjectWebhookLogResponse::toJson() const
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
    if(requestHeadersIsSet_) {
        val[utility::conversions::to_string_t("request_headers")] = ModelBase::toJson(requestHeaders_);
    }
    if(requestDataIsSet_) {
        val[utility::conversions::to_string_t("request_data")] = ModelBase::toJson(requestData_);
    }
    if(responseHeadersIsSet_) {
        val[utility::conversions::to_string_t("response_headers")] = ModelBase::toJson(responseHeaders_);
    }
    if(responseBodyIsSet_) {
        val[utility::conversions::to_string_t("response_body")] = ModelBase::toJson(responseBody_);
    }

    return val;
}
bool ShowProjectWebhookLogResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("request_headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_headers"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_headers"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseBody(refVal);
        }
    }
    return ok;
}


int32_t ShowProjectWebhookLogResponse::getId() const
{
    return id_;
}

void ShowProjectWebhookLogResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowProjectWebhookLogResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowProjectWebhookLogResponse::getWebHookId() const
{
    return webHookId_;
}

void ShowProjectWebhookLogResponse::setWebHookId(int32_t value)
{
    webHookId_ = value;
    webHookIdIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::webHookIdIsSet() const
{
    return webHookIdIsSet_;
}

void ShowProjectWebhookLogResponse::unsetwebHookId()
{
    webHookIdIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getTrigger() const
{
    return trigger_;
}

void ShowProjectWebhookLogResponse::setTrigger(const std::string& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::triggerIsSet() const
{
    return triggerIsSet_;
}

void ShowProjectWebhookLogResponse::unsettrigger()
{
    triggerIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getUrl() const
{
    return url_;
}

void ShowProjectWebhookLogResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowProjectWebhookLogResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getResponseStatus() const
{
    return responseStatus_;
}

void ShowProjectWebhookLogResponse::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void ShowProjectWebhookLogResponse::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

double ShowProjectWebhookLogResponse::getExecutionDuration() const
{
    return executionDuration_;
}

void ShowProjectWebhookLogResponse::setExecutionDuration(double value)
{
    executionDuration_ = value;
    executionDurationIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::executionDurationIsSet() const
{
    return executionDurationIsSet_;
}

void ShowProjectWebhookLogResponse::unsetexecutionDuration()
{
    executionDurationIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getUuid() const
{
    return uuid_;
}

void ShowProjectWebhookLogResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void ShowProjectWebhookLogResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowProjectWebhookLogResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowProjectWebhookLogResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowProjectWebhookLogResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowProjectWebhookLogResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowProjectWebhookLogResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

Object ShowProjectWebhookLogResponse::getRequestHeaders() const
{
    return requestHeaders_;
}

void ShowProjectWebhookLogResponse::setRequestHeaders(const Object& value)
{
    requestHeaders_ = value;
    requestHeadersIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::requestHeadersIsSet() const
{
    return requestHeadersIsSet_;
}

void ShowProjectWebhookLogResponse::unsetrequestHeaders()
{
    requestHeadersIsSet_ = false;
}

Object ShowProjectWebhookLogResponse::getRequestData() const
{
    return requestData_;
}

void ShowProjectWebhookLogResponse::setRequestData(const Object& value)
{
    requestData_ = value;
    requestDataIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::requestDataIsSet() const
{
    return requestDataIsSet_;
}

void ShowProjectWebhookLogResponse::unsetrequestData()
{
    requestDataIsSet_ = false;
}

Object ShowProjectWebhookLogResponse::getResponseHeaders() const
{
    return responseHeaders_;
}

void ShowProjectWebhookLogResponse::setResponseHeaders(const Object& value)
{
    responseHeaders_ = value;
    responseHeadersIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::responseHeadersIsSet() const
{
    return responseHeadersIsSet_;
}

void ShowProjectWebhookLogResponse::unsetresponseHeaders()
{
    responseHeadersIsSet_ = false;
}

Object ShowProjectWebhookLogResponse::getResponseBody() const
{
    return responseBody_;
}

void ShowProjectWebhookLogResponse::setResponseBody(const Object& value)
{
    responseBody_ = value;
    responseBodyIsSet_ = true;
}

bool ShowProjectWebhookLogResponse::responseBodyIsSet() const
{
    return responseBodyIsSet_;
}

void ShowProjectWebhookLogResponse::unsetresponseBody()
{
    responseBodyIsSet_ = false;
}

}
}
}
}
}


