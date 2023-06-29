

#include "huaweicloud/mpc/v1/model/ListStatSummaryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListStatSummaryRequest::ListStatSummaryRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
}

ListStatSummaryRequest::~ListStatSummaryRequest() = default;

void ListStatSummaryRequest::validate()
{
}

web::json::value ListStatSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }

    return val;
}

bool ListStatSummaryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    return ok;
}


std::string ListStatSummaryRequest::getStartTime() const
{
    return startTime_;
}

void ListStatSummaryRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListStatSummaryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListStatSummaryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListStatSummaryRequest::getEndTime() const
{
    return endTime_;
}

void ListStatSummaryRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListStatSummaryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListStatSummaryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListStatSummaryRequest::getStatType() const
{
    return statType_;
}

void ListStatSummaryRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListStatSummaryRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListStatSummaryRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

}
}
}
}
}


