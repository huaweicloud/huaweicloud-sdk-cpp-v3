

#include "huaweicloud/lts/v2/model/ListLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogsRequest::ListLogsRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListLogsRequest::~ListLogsRequest() = default;

void ListLogsRequest::validate()
{
}

web::json::value ListLogsRequest::toJson() const
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

bool ListLogsRequest::fromJson(const web::json::value& val)
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
            QueryLtsLogParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLogsRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListLogsRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListLogsRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListLogsRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListLogsRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListLogsRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListLogsRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListLogsRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListLogsRequest::getContentType() const
{
    return contentType_;
}

void ListLogsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

QueryLtsLogParams ListLogsRequest::getBody() const
{
    return body_;
}

void ListLogsRequest::setBody(const QueryLtsLogParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


