

#include "huaweicloud/live/v2/model/ListHistoryStreamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListHistoryStreamsRequest::ListHistoryStreamsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListHistoryStreamsRequest::~ListHistoryStreamsRequest() = default;

void ListHistoryStreamsRequest::validate()
{
}

web::json::value ListHistoryStreamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListHistoryStreamsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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


std::string ListHistoryStreamsRequest::getProjectId() const
{
    return projectId_;
}

void ListHistoryStreamsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListHistoryStreamsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListHistoryStreamsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListHistoryStreamsRequest::getDomain() const
{
    return domain_;
}

void ListHistoryStreamsRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListHistoryStreamsRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListHistoryStreamsRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListHistoryStreamsRequest::getApp() const
{
    return app_;
}

void ListHistoryStreamsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListHistoryStreamsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListHistoryStreamsRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListHistoryStreamsRequest::getStream() const
{
    return stream_;
}

void ListHistoryStreamsRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListHistoryStreamsRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListHistoryStreamsRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListHistoryStreamsRequest::getStartTime() const
{
    return startTime_;
}

void ListHistoryStreamsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHistoryStreamsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHistoryStreamsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListHistoryStreamsRequest::getEndTime() const
{
    return endTime_;
}

void ListHistoryStreamsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHistoryStreamsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHistoryStreamsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListHistoryStreamsRequest::getOffset() const
{
    return offset_;
}

void ListHistoryStreamsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistoryStreamsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistoryStreamsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistoryStreamsRequest::getLimit() const
{
    return limit_;
}

void ListHistoryStreamsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistoryStreamsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistoryStreamsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


