

#include "huaweicloud/live/v1/model/ListRecordContentsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordContentsRequest::ListRecordContentsRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRecordContentsRequest::~ListRecordContentsRequest() = default;

void ListRecordContentsRequest::validate()
{
}

web::json::value ListRecordContentsRequest::toJson() const
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
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("record_type")] = ModelBase::toJson(recordType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListRecordContentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
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


std::string ListRecordContentsRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListRecordContentsRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListRecordContentsRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListRecordContentsRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListRecordContentsRequest::getApp() const
{
    return app_;
}

void ListRecordContentsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListRecordContentsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListRecordContentsRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListRecordContentsRequest::getStream() const
{
    return stream_;
}

void ListRecordContentsRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListRecordContentsRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListRecordContentsRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListRecordContentsRequest::getRecordType() const
{
    return recordType_;
}

void ListRecordContentsRequest::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool ListRecordContentsRequest::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void ListRecordContentsRequest::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

std::string ListRecordContentsRequest::getStartTime() const
{
    return startTime_;
}

void ListRecordContentsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRecordContentsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRecordContentsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRecordContentsRequest::getEndTime() const
{
    return endTime_;
}

void ListRecordContentsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRecordContentsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRecordContentsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListRecordContentsRequest::getOffset() const
{
    return offset_;
}

void ListRecordContentsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecordContentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecordContentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRecordContentsRequest::getLimit() const
{
    return limit_;
}

void ListRecordContentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecordContentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecordContentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


