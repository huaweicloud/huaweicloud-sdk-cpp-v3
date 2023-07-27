

#include "huaweicloud/lts/v2/model/UpdateLogStreamRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogStreamRequest::UpdateLogStreamRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogStreamRequest::~UpdateLogStreamRequest() = default;

void UpdateLogStreamRequest::validate()
{
}

web::json::value UpdateLogStreamRequest::toJson() const
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

bool UpdateLogStreamRequest::fromJson(const web::json::value& val)
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
            UpdateLogStreamParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateLogStreamRequest::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateLogStreamRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateLogStreamRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateLogStreamRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateLogStreamRequest::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateLogStreamRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateLogStreamRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateLogStreamRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string UpdateLogStreamRequest::getContentType() const
{
    return contentType_;
}

void UpdateLogStreamRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateLogStreamRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateLogStreamRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateLogStreamParams UpdateLogStreamRequest::getBody() const
{
    return body_;
}

void UpdateLogStreamRequest::setBody(const UpdateLogStreamParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogStreamRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogStreamRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


