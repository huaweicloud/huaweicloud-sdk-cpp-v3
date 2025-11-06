

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupWebhookLogResponse::ShowGroupWebhookLogResponse()
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

ShowGroupWebhookLogResponse::~ShowGroupWebhookLogResponse() = default;

void ShowGroupWebhookLogResponse::validate()
{
}

web::json::value ShowGroupWebhookLogResponse::toJson() const
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
bool ShowGroupWebhookLogResponse::fromJson(const web::json::value& val)
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


int32_t ShowGroupWebhookLogResponse::getId() const
{
    return id_;
}

void ShowGroupWebhookLogResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowGroupWebhookLogResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowGroupWebhookLogResponse::getWebHookId() const
{
    return webHookId_;
}

void ShowGroupWebhookLogResponse::setWebHookId(int32_t value)
{
    webHookId_ = value;
    webHookIdIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::webHookIdIsSet() const
{
    return webHookIdIsSet_;
}

void ShowGroupWebhookLogResponse::unsetwebHookId()
{
    webHookIdIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getTrigger() const
{
    return trigger_;
}

void ShowGroupWebhookLogResponse::setTrigger(const std::string& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::triggerIsSet() const
{
    return triggerIsSet_;
}

void ShowGroupWebhookLogResponse::unsettrigger()
{
    triggerIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getUrl() const
{
    return url_;
}

void ShowGroupWebhookLogResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowGroupWebhookLogResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getResponseStatus() const
{
    return responseStatus_;
}

void ShowGroupWebhookLogResponse::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void ShowGroupWebhookLogResponse::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

double ShowGroupWebhookLogResponse::getExecutionDuration() const
{
    return executionDuration_;
}

void ShowGroupWebhookLogResponse::setExecutionDuration(double value)
{
    executionDuration_ = value;
    executionDurationIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::executionDurationIsSet() const
{
    return executionDurationIsSet_;
}

void ShowGroupWebhookLogResponse::unsetexecutionDuration()
{
    executionDurationIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getUuid() const
{
    return uuid_;
}

void ShowGroupWebhookLogResponse::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::uuidIsSet() const
{
    return uuidIsSet_;
}

void ShowGroupWebhookLogResponse::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowGroupWebhookLogResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowGroupWebhookLogResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowGroupWebhookLogResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowGroupWebhookLogResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowGroupWebhookLogResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

Object ShowGroupWebhookLogResponse::getRequestHeaders() const
{
    return requestHeaders_;
}

void ShowGroupWebhookLogResponse::setRequestHeaders(const Object& value)
{
    requestHeaders_ = value;
    requestHeadersIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::requestHeadersIsSet() const
{
    return requestHeadersIsSet_;
}

void ShowGroupWebhookLogResponse::unsetrequestHeaders()
{
    requestHeadersIsSet_ = false;
}

Object ShowGroupWebhookLogResponse::getRequestData() const
{
    return requestData_;
}

void ShowGroupWebhookLogResponse::setRequestData(const Object& value)
{
    requestData_ = value;
    requestDataIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::requestDataIsSet() const
{
    return requestDataIsSet_;
}

void ShowGroupWebhookLogResponse::unsetrequestData()
{
    requestDataIsSet_ = false;
}

Object ShowGroupWebhookLogResponse::getResponseHeaders() const
{
    return responseHeaders_;
}

void ShowGroupWebhookLogResponse::setResponseHeaders(const Object& value)
{
    responseHeaders_ = value;
    responseHeadersIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::responseHeadersIsSet() const
{
    return responseHeadersIsSet_;
}

void ShowGroupWebhookLogResponse::unsetresponseHeaders()
{
    responseHeadersIsSet_ = false;
}

Object ShowGroupWebhookLogResponse::getResponseBody() const
{
    return responseBody_;
}

void ShowGroupWebhookLogResponse::setResponseBody(const Object& value)
{
    responseBody_ = value;
    responseBodyIsSet_ = true;
}

bool ShowGroupWebhookLogResponse::responseBodyIsSet() const
{
    return responseBodyIsSet_;
}

void ShowGroupWebhookLogResponse::unsetresponseBody()
{
    responseBodyIsSet_ = false;
}

}
}
}
}
}


