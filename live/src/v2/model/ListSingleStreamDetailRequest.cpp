

#include "huaweicloud/live/v2/model/ListSingleStreamDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamDetailRequest::ListSingleStreamDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
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

ListSingleStreamDetailRequest::~ListSingleStreamDetailRequest() = default;

void ListSingleStreamDetailRequest::validate()
{
}

web::json::value ListSingleStreamDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
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
bool ListSingleStreamDetailRequest::fromJson(const web::json::value& val)
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


std::string ListSingleStreamDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListSingleStreamDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListSingleStreamDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListSingleStreamDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListSingleStreamDetailRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListSingleStreamDetailRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListSingleStreamDetailRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListSingleStreamDetailRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListSingleStreamDetailRequest::getApp() const
{
    return app_;
}

void ListSingleStreamDetailRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListSingleStreamDetailRequest::appIsSet() const
{
    return appIsSet_;
}

void ListSingleStreamDetailRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListSingleStreamDetailRequest::getStream() const
{
    return stream_;
}

void ListSingleStreamDetailRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListSingleStreamDetailRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListSingleStreamDetailRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListSingleStreamDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListSingleStreamDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSingleStreamDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSingleStreamDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSingleStreamDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListSingleStreamDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSingleStreamDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSingleStreamDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


