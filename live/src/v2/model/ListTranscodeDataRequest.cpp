

#include "huaweicloud/live/v2/model/ListTranscodeDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeDataRequest::ListTranscodeDataRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListTranscodeDataRequest::~ListTranscodeDataRequest() = default;

void ListTranscodeDataRequest::validate()
{
}

web::json::value ListTranscodeDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
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
bool ListTranscodeDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
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


std::string ListTranscodeDataRequest::getProjectId() const
{
    return projectId_;
}

void ListTranscodeDataRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTranscodeDataRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTranscodeDataRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTranscodeDataRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListTranscodeDataRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListTranscodeDataRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListTranscodeDataRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListTranscodeDataRequest::getStream() const
{
    return stream_;
}

void ListTranscodeDataRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListTranscodeDataRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListTranscodeDataRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListTranscodeDataRequest::getStartTime() const
{
    return startTime_;
}

void ListTranscodeDataRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTranscodeDataRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTranscodeDataRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTranscodeDataRequest::getEndTime() const
{
    return endTime_;
}

void ListTranscodeDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTranscodeDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTranscodeDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


