

#include "huaweicloud/functiongraph/v2/model/ShowEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowEventRequest::ShowEventRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    eventId_ = "";
    eventIdIsSet_ = false;
}

ShowEventRequest::~ShowEventRequest() = default;

void ShowEventRequest::validate()
{
}

web::json::value ShowEventRequest::toJson() const
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

    return val;
}
bool ShowEventRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowEventRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowEventRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowEventRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowEventRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowEventRequest::getContentType() const
{
    return contentType_;
}

void ShowEventRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowEventRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowEventRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ShowEventRequest::getEventId() const
{
    return eventId_;
}

void ShowEventRequest::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool ShowEventRequest::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void ShowEventRequest::unseteventId()
{
    eventIdIsSet_ = false;
}

}
}
}
}
}


