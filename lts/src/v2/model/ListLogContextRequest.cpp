

#include "huaweicloud/lts/v2/model/ListLogContextRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogContextRequest::ListLogContextRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListLogContextRequest::~ListLogContextRequest() = default;

void ListLogContextRequest::validate()
{
}

web::json::value ListLogContextRequest::toJson() const
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
bool ListLogContextRequest::fromJson(const web::json::value& val)
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
            ListLogContextRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLogContextRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListLogContextRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListLogContextRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListLogContextRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListLogContextRequest::getLogStreamId() const
{
    return logStreamId_;
}

void ListLogContextRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListLogContextRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListLogContextRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListLogContextRequest::getContentType() const
{
    return contentType_;
}

void ListLogContextRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogContextRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogContextRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

ListLogContextRequestBody ListLogContextRequest::getBody() const
{
    return body_;
}

void ListLogContextRequest::setBody(const ListLogContextRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLogContextRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLogContextRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


