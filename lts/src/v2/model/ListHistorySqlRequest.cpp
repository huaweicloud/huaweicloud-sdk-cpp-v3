

#include "huaweicloud/lts/v2/model/ListHistorySqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHistorySqlRequest::ListHistorySqlRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

ListHistorySqlRequest::~ListHistorySqlRequest() = default;

void ListHistorySqlRequest::validate()
{
}

web::json::value ListHistorySqlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool ListHistorySqlRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListHistorySqlRequest::getContentType() const
{
    return contentType_;
}

void ListHistorySqlRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListHistorySqlRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListHistorySqlRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListHistorySqlRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListHistorySqlRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListHistorySqlRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListHistorySqlRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListHistorySqlRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListHistorySqlRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListHistorySqlRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListHistorySqlRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


