

#include "huaweicloud/live/v2/model/ListSingleStreamBitrateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamBitrateRequest::ListSingleStreamBitrateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListSingleStreamBitrateRequest::~ListSingleStreamBitrateRequest() = default;

void ListSingleStreamBitrateRequest::validate()
{
}

web::json::value ListSingleStreamBitrateRequest::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListSingleStreamBitrateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ListSingleStreamBitrateRequest::getProjectId() const
{
    return projectId_;
}

void ListSingleStreamBitrateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListSingleStreamBitrateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getDomain() const
{
    return domain_;
}

void ListSingleStreamBitrateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListSingleStreamBitrateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getApp() const
{
    return app_;
}

void ListSingleStreamBitrateRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::appIsSet() const
{
    return appIsSet_;
}

void ListSingleStreamBitrateRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getStream() const
{
    return stream_;
}

void ListSingleStreamBitrateRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListSingleStreamBitrateRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getType() const
{
    return type_;
}

void ListSingleStreamBitrateRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSingleStreamBitrateRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getStartTime() const
{
    return startTime_;
}

void ListSingleStreamBitrateRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSingleStreamBitrateRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSingleStreamBitrateRequest::getEndTime() const
{
    return endTime_;
}

void ListSingleStreamBitrateRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSingleStreamBitrateRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSingleStreamBitrateRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


