

#include "huaweicloud/lts/v2/model/CreateLogStreamIndexRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamIndexRequest::CreateLogStreamIndexRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLogStreamIndexRequest::~CreateLogStreamIndexRequest() = default;

void CreateLogStreamIndexRequest::validate()
{
}

web::json::value CreateLogStreamIndexRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateLogStreamIndexRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
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
            LTSIndexConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLogStreamIndexRequest::getGroupId() const
{
    return groupId_;
}

void CreateLogStreamIndexRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateLogStreamIndexRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateLogStreamIndexRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateLogStreamIndexRequest::getStreamId() const
{
    return streamId_;
}

void CreateLogStreamIndexRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool CreateLogStreamIndexRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void CreateLogStreamIndexRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string CreateLogStreamIndexRequest::getContentType() const
{
    return contentType_;
}

void CreateLogStreamIndexRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateLogStreamIndexRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateLogStreamIndexRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

LTSIndexConfigInfo CreateLogStreamIndexRequest::getBody() const
{
    return body_;
}

void CreateLogStreamIndexRequest::setBody(const LTSIndexConfigInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogStreamIndexRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogStreamIndexRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


