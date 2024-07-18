

#include "huaweicloud/live/v2/model/ListPlayDomainStreamInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListPlayDomainStreamInfoRequest::ListPlayDomainStreamInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    playDomainsIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

ListPlayDomainStreamInfoRequest::~ListPlayDomainStreamInfoRequest() = default;

void ListPlayDomainStreamInfoRequest::validate()
{
}

web::json::value ListPlayDomainStreamInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(playDomainsIsSet_) {
        val[utility::conversions::to_string_t("play_domains")] = ModelBase::toJson(playDomains_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool ListPlayDomainStreamInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("play_domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string ListPlayDomainStreamInfoRequest::getProjectId() const
{
    return projectId_;
}

void ListPlayDomainStreamInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPlayDomainStreamInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPlayDomainStreamInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListPlayDomainStreamInfoRequest::getPlayDomains()
{
    return playDomains_;
}

void ListPlayDomainStreamInfoRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListPlayDomainStreamInfoRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListPlayDomainStreamInfoRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListPlayDomainStreamInfoRequest::getTime() const
{
    return time_;
}

void ListPlayDomainStreamInfoRequest::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ListPlayDomainStreamInfoRequest::timeIsSet() const
{
    return timeIsSet_;
}

void ListPlayDomainStreamInfoRequest::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


