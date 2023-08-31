

#include "huaweicloud/live/v2/model/ListQueryHttpCodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListQueryHttpCodeRequest::ListQueryHttpCodeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    playDomainsIsSet_ = false;
    codeIsSet_ = false;
    regionIsSet_ = false;
    ispIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListQueryHttpCodeRequest::~ListQueryHttpCodeRequest() = default;

void ListQueryHttpCodeRequest::validate()
{
}

web::json::value ListQueryHttpCodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(playDomainsIsSet_) {
        val[utility::conversions::to_string_t("play_domains")] = ModelBase::toJson(playDomains_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListQueryHttpCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
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

std::string ListQueryHttpCodeRequest::getProjectId() const
{
    return projectId_;
}

void ListQueryHttpCodeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListQueryHttpCodeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListQueryHttpCodeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListQueryHttpCodeRequest::getPlayDomains()
{
    return playDomains_;
}

void ListQueryHttpCodeRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListQueryHttpCodeRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListQueryHttpCodeRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::vector<std::string>& ListQueryHttpCodeRequest::getCode()
{
    return code_;
}

void ListQueryHttpCodeRequest::setCode(const std::vector<std::string>& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListQueryHttpCodeRequest::codeIsSet() const
{
    return codeIsSet_;
}

void ListQueryHttpCodeRequest::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<std::string>& ListQueryHttpCodeRequest::getRegion()
{
    return region_;
}

void ListQueryHttpCodeRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListQueryHttpCodeRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListQueryHttpCodeRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ListQueryHttpCodeRequest::getIsp()
{
    return isp_;
}

void ListQueryHttpCodeRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListQueryHttpCodeRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListQueryHttpCodeRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ListQueryHttpCodeRequest::getStartTime() const
{
    return startTime_;
}

void ListQueryHttpCodeRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListQueryHttpCodeRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListQueryHttpCodeRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListQueryHttpCodeRequest::getEndTime() const
{
    return endTime_;
}

void ListQueryHttpCodeRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListQueryHttpCodeRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListQueryHttpCodeRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


