

#include "huaweicloud/live/v2/model/ListSingleStreamFramerateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamFramerateRequest::ListSingleStreamFramerateRequest()
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
}

ListSingleStreamFramerateRequest::~ListSingleStreamFramerateRequest() = default;

void ListSingleStreamFramerateRequest::validate()
{
}

web::json::value ListSingleStreamFramerateRequest::toJson() const
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

    return val;
}
bool ListSingleStreamFramerateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListSingleStreamFramerateRequest::getProjectId() const
{
    return projectId_;
}

void ListSingleStreamFramerateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListSingleStreamFramerateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListSingleStreamFramerateRequest::getDomain() const
{
    return domain_;
}

void ListSingleStreamFramerateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListSingleStreamFramerateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListSingleStreamFramerateRequest::getApp() const
{
    return app_;
}

void ListSingleStreamFramerateRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::appIsSet() const
{
    return appIsSet_;
}

void ListSingleStreamFramerateRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListSingleStreamFramerateRequest::getStream() const
{
    return stream_;
}

void ListSingleStreamFramerateRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListSingleStreamFramerateRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListSingleStreamFramerateRequest::getStartTime() const
{
    return startTime_;
}

void ListSingleStreamFramerateRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSingleStreamFramerateRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSingleStreamFramerateRequest::getEndTime() const
{
    return endTime_;
}

void ListSingleStreamFramerateRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSingleStreamFramerateRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSingleStreamFramerateRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


