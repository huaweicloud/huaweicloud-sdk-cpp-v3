

#include "huaweicloud/live/v2/model/ListTranscodeTaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeTaskDetailRequest::ListTranscodeTaskDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    streamNameListIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListTranscodeTaskDetailRequest::~ListTranscodeTaskDetailRequest() = default;

void ListTranscodeTaskDetailRequest::validate()
{
}

web::json::value ListTranscodeTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(streamNameListIsSet_) {
        val[utility::conversions::to_string_t("stream_name_list")] = ModelBase::toJson(streamNameList_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListTranscodeTaskDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stream_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamNameList(refVal);
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


std::string ListTranscodeTaskDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListTranscodeTaskDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTranscodeTaskDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTranscodeTaskDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTranscodeTaskDetailRequest::getDomain() const
{
    return domain_;
}

void ListTranscodeTaskDetailRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListTranscodeTaskDetailRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListTranscodeTaskDetailRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::vector<std::string>& ListTranscodeTaskDetailRequest::getStreamNameList()
{
    return streamNameList_;
}

void ListTranscodeTaskDetailRequest::setStreamNameList(const std::vector<std::string>& value)
{
    streamNameList_ = value;
    streamNameListIsSet_ = true;
}

bool ListTranscodeTaskDetailRequest::streamNameListIsSet() const
{
    return streamNameListIsSet_;
}

void ListTranscodeTaskDetailRequest::unsetstreamNameList()
{
    streamNameListIsSet_ = false;
}

std::string ListTranscodeTaskDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListTranscodeTaskDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTranscodeTaskDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTranscodeTaskDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTranscodeTaskDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListTranscodeTaskDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTranscodeTaskDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTranscodeTaskDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


