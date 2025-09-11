

#include "huaweicloud/functiongraph/v2/model/DeleteEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteEventRequest::DeleteEventRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    eventId_ = "";
    eventIdIsSet_ = false;
}

DeleteEventRequest::~DeleteEventRequest() = default;

void DeleteEventRequest::validate()
{
}

web::json::value DeleteEventRequest::toJson() const
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
bool DeleteEventRequest::fromJson(const web::json::value& val)
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


std::string DeleteEventRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void DeleteEventRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool DeleteEventRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void DeleteEventRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string DeleteEventRequest::getContentType() const
{
    return contentType_;
}

void DeleteEventRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteEventRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteEventRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string DeleteEventRequest::getEventId() const
{
    return eventId_;
}

void DeleteEventRequest::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool DeleteEventRequest::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void DeleteEventRequest::unseteventId()
{
    eventIdIsSet_ = false;
}

}
}
}
}
}


