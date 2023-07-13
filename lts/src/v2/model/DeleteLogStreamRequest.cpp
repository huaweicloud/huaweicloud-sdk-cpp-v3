

#include "huaweicloud/lts/v2/model/DeleteLogStreamRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteLogStreamRequest::DeleteLogStreamRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteLogStreamRequest::~DeleteLogStreamRequest() = default;

void DeleteLogStreamRequest::validate()
{
}

web::json::value DeleteLogStreamRequest::toJson() const
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

    return val;
}

bool DeleteLogStreamRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteLogStreamRequest::getLogGroupId() const
{
    return logGroupId_;
}

void DeleteLogStreamRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool DeleteLogStreamRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void DeleteLogStreamRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string DeleteLogStreamRequest::getLogStreamId() const
{
    return logStreamId_;
}

void DeleteLogStreamRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool DeleteLogStreamRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void DeleteLogStreamRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string DeleteLogStreamRequest::getContentType() const
{
    return contentType_;
}

void DeleteLogStreamRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteLogStreamRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteLogStreamRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


