

#include "huaweicloud/lts/v2/model/ListQueryStructuredLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListQueryStructuredLogsRequest::ListQueryStructuredLogsRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListQueryStructuredLogsRequest::~ListQueryStructuredLogsRequest() = default;

void ListQueryStructuredLogsRequest::validate()
{
}

web::json::value ListQueryStructuredLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListQueryStructuredLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryLtsStructLogParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListQueryStructuredLogsRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListQueryStructuredLogsRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListQueryStructuredLogsRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListQueryStructuredLogsRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListQueryStructuredLogsRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListQueryStructuredLogsRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListQueryStructuredLogsRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListQueryStructuredLogsRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListQueryStructuredLogsRequest::getContentType() const
{
    return contentType_;
}

void ListQueryStructuredLogsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListQueryStructuredLogsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListQueryStructuredLogsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

QueryLtsStructLogParams ListQueryStructuredLogsRequest::getBody() const
{
    return body_;
}

void ListQueryStructuredLogsRequest::setBody(const QueryLtsStructLogParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListQueryStructuredLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListQueryStructuredLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


