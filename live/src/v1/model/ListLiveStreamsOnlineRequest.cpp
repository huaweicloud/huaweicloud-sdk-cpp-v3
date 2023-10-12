

#include "huaweicloud/live/v1/model/ListLiveStreamsOnlineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListLiveStreamsOnlineRequest::ListLiveStreamsOnlineRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
}

ListLiveStreamsOnlineRequest::~ListLiveStreamsOnlineRequest() = default;

void ListLiveStreamsOnlineRequest::validate()
{
}

web::json::value ListLiveStreamsOnlineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }

    return val;
}
bool ListLiveStreamsOnlineRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    return ok;
}


std::string ListLiveStreamsOnlineRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListLiveStreamsOnlineRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListLiveStreamsOnlineRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListLiveStreamsOnlineRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListLiveStreamsOnlineRequest::getApp() const
{
    return app_;
}

void ListLiveStreamsOnlineRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListLiveStreamsOnlineRequest::appIsSet() const
{
    return appIsSet_;
}

void ListLiveStreamsOnlineRequest::unsetapp()
{
    appIsSet_ = false;
}

int32_t ListLiveStreamsOnlineRequest::getOffset() const
{
    return offset_;
}

void ListLiveStreamsOnlineRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLiveStreamsOnlineRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLiveStreamsOnlineRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLiveStreamsOnlineRequest::getLimit() const
{
    return limit_;
}

void ListLiveStreamsOnlineRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLiveStreamsOnlineRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLiveStreamsOnlineRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLiveStreamsOnlineRequest::getStream() const
{
    return stream_;
}

void ListLiveStreamsOnlineRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListLiveStreamsOnlineRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListLiveStreamsOnlineRequest::unsetstream()
{
    streamIsSet_ = false;
}

}
}
}
}
}


