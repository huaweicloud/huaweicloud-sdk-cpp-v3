

#include "huaweicloud/live/v2/model/ListUpStreamDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListUpStreamDetailRequest::ListUpStreamDetailRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListUpStreamDetailRequest::~ListUpStreamDetailRequest() = default;

void ListUpStreamDetailRequest::validate()
{
}

web::json::value ListUpStreamDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListUpStreamDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListUpStreamDetailRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListUpStreamDetailRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListUpStreamDetailRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListUpStreamDetailRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListUpStreamDetailRequest::getApp() const
{
    return app_;
}

void ListUpStreamDetailRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListUpStreamDetailRequest::appIsSet() const
{
    return appIsSet_;
}

void ListUpStreamDetailRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListUpStreamDetailRequest::getStream() const
{
    return stream_;
}

void ListUpStreamDetailRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListUpStreamDetailRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListUpStreamDetailRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListUpStreamDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListUpStreamDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListUpStreamDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListUpStreamDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListUpStreamDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListUpStreamDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListUpStreamDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListUpStreamDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


