

#include "huaweicloud/live/v1/model/ListLiveSampleLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListLiveSampleLogsRequest::ListLiveSampleLogsRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
}

ListLiveSampleLogsRequest::~ListLiveSampleLogsRequest() = default;

void ListLiveSampleLogsRequest::validate()
{
}

web::json::value ListLiveSampleLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListLiveSampleLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListLiveSampleLogsRequest::getPlayDomain() const
{
    return playDomain_;
}

void ListLiveSampleLogsRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListLiveSampleLogsRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListLiveSampleLogsRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

utility::datetime ListLiveSampleLogsRequest::getStartTime() const
{
    return startTime_;
}

void ListLiveSampleLogsRequest::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLiveSampleLogsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLiveSampleLogsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ListLiveSampleLogsRequest::getEndTime() const
{
    return endTime_;
}

void ListLiveSampleLogsRequest::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLiveSampleLogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLiveSampleLogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


