

#include "huaweicloud/lts/v2/model/ListLogStreamsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamsRequest::ListLogStreamsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLogStreamsRequest::~ListLogStreamsRequest() = default;

void ListLogStreamsRequest::validate()
{
}

web::json::value ListLogStreamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListLogStreamsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ListLogStreamsRequest::getContentType() const
{
    return contentType_;
}

void ListLogStreamsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogStreamsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogStreamsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListLogStreamsRequest::getLogGroupName() const
{
    return logGroupName_;
}

void ListLogStreamsRequest::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool ListLogStreamsRequest::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void ListLogStreamsRequest::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string ListLogStreamsRequest::getLogStreamName() const
{
    return logStreamName_;
}

void ListLogStreamsRequest::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool ListLogStreamsRequest::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void ListLogStreamsRequest::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

int32_t ListLogStreamsRequest::getOffset() const
{
    return offset_;
}

void ListLogStreamsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLogStreamsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLogStreamsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLogStreamsRequest::getLimit() const
{
    return limit_;
}

void ListLogStreamsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogStreamsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogStreamsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


