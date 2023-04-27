

#include "huaweicloud/lts/v2/model/ListChartsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListChartsRequest::ListChartsRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListChartsRequest::~ListChartsRequest() = default;

void ListChartsRequest::validate()
{
}

web::json::value ListChartsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ListChartsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListChartsRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListChartsRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListChartsRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListChartsRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListChartsRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListChartsRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListChartsRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListChartsRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

int32_t ListChartsRequest::getOffset() const
{
    return offset_;
}

void ListChartsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListChartsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListChartsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListChartsRequest::getLimit() const
{
    return limit_;
}

void ListChartsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListChartsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListChartsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListChartsRequest::getContentType() const
{
    return contentType_;
}

void ListChartsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListChartsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListChartsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


