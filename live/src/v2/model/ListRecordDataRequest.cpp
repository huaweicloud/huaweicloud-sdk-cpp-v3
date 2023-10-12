

#include "huaweicloud/live/v2/model/ListRecordDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListRecordDataRequest::ListRecordDataRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListRecordDataRequest::~ListRecordDataRequest() = default;

void ListRecordDataRequest::validate()
{
}

web::json::value ListRecordDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListRecordDataRequest::fromJson(const web::json::value& val)
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


std::string ListRecordDataRequest::getProjectId() const
{
    return projectId_;
}

void ListRecordDataRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListRecordDataRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListRecordDataRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListRecordDataRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListRecordDataRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListRecordDataRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListRecordDataRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListRecordDataRequest::getStartTime() const
{
    return startTime_;
}

void ListRecordDataRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRecordDataRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRecordDataRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRecordDataRequest::getEndTime() const
{
    return endTime_;
}

void ListRecordDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRecordDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRecordDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


