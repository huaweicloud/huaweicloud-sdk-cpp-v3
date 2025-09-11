

#include "huaweicloud/functiongraph/v2/model/UpdateEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateEventRequest::UpdateEventRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    eventId_ = "";
    eventIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEventRequest::~UpdateEventRequest() = default;

void UpdateEventRequest::validate()
{
}

web::json::value UpdateEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateEventRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateEventRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEventRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateEventRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateEventRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateEventRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateEventRequest::getContentType() const
{
    return contentType_;
}

void UpdateEventRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateEventRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateEventRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string UpdateEventRequest::getEventId() const
{
    return eventId_;
}

void UpdateEventRequest::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool UpdateEventRequest::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void UpdateEventRequest::unseteventId()
{
    eventIdIsSet_ = false;
}

UpdateEventRequestBody UpdateEventRequest::getBody() const
{
    return body_;
}

void UpdateEventRequest::setBody(const UpdateEventRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


