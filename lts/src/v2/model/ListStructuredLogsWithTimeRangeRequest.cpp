

#include "huaweicloud/lts/v2/model/ListStructuredLogsWithTimeRangeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructuredLogsWithTimeRangeRequest::ListStructuredLogsWithTimeRangeRequest()
{
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListStructuredLogsWithTimeRangeRequest::~ListStructuredLogsWithTimeRangeRequest() = default;

void ListStructuredLogsWithTimeRangeRequest::validate()
{
}

web::json::value ListStructuredLogsWithTimeRangeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool ListStructuredLogsWithTimeRangeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            QueryLtsStructLogParamsNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListStructuredLogsWithTimeRangeRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListStructuredLogsWithTimeRangeRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListStructuredLogsWithTimeRangeRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListStructuredLogsWithTimeRangeRequest::getContentType() const
{
    return contentType_;
}

void ListStructuredLogsWithTimeRangeRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListStructuredLogsWithTimeRangeRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

QueryLtsStructLogParamsNew ListStructuredLogsWithTimeRangeRequest::getBody() const
{
    return body_;
}

void ListStructuredLogsWithTimeRangeRequest::setBody(const QueryLtsStructLogParamsNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListStructuredLogsWithTimeRangeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListStructuredLogsWithTimeRangeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


