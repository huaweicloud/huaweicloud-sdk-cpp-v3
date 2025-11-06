

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryStatisticsStatusResponse::ShowRepositoryStatisticsStatusResponse()
{
    canStatistics_ = false;
    canStatisticsIsSet_ = false;
    reason_ = 0;
    reasonIsSet_ = false;
    eventIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowRepositoryStatisticsStatusResponse::~ShowRepositoryStatisticsStatusResponse() = default;

void ShowRepositoryStatisticsStatusResponse::validate()
{
}

web::json::value ShowRepositoryStatisticsStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canStatisticsIsSet_) {
        val[utility::conversions::to_string_t("can_statistics")] = ModelBase::toJson(canStatistics_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(eventIsSet_) {
        val[utility::conversions::to_string_t("event")] = ModelBase::toJson(event_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowRepositoryStatisticsStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_statistics"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event"));
        if(!fieldValue.is_null())
        {
            StatisticEventsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


bool ShowRepositoryStatisticsStatusResponse::isCanStatistics() const
{
    return canStatistics_;
}

void ShowRepositoryStatisticsStatusResponse::setCanStatistics(bool value)
{
    canStatistics_ = value;
    canStatisticsIsSet_ = true;
}

bool ShowRepositoryStatisticsStatusResponse::canStatisticsIsSet() const
{
    return canStatisticsIsSet_;
}

void ShowRepositoryStatisticsStatusResponse::unsetcanStatistics()
{
    canStatisticsIsSet_ = false;
}

int32_t ShowRepositoryStatisticsStatusResponse::getReason() const
{
    return reason_;
}

void ShowRepositoryStatisticsStatusResponse::setReason(int32_t value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ShowRepositoryStatisticsStatusResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ShowRepositoryStatisticsStatusResponse::unsetreason()
{
    reasonIsSet_ = false;
}

StatisticEventsDto ShowRepositoryStatisticsStatusResponse::getEvent() const
{
    return event_;
}

void ShowRepositoryStatisticsStatusResponse::setEvent(const StatisticEventsDto& value)
{
    event_ = value;
    eventIsSet_ = true;
}

bool ShowRepositoryStatisticsStatusResponse::eventIsSet() const
{
    return eventIsSet_;
}

void ShowRepositoryStatisticsStatusResponse::unsetevent()
{
    eventIsSet_ = false;
}

std::string ShowRepositoryStatisticsStatusResponse::getXTotal() const
{
    return xTotal_;
}

void ShowRepositoryStatisticsStatusResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowRepositoryStatisticsStatusResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowRepositoryStatisticsStatusResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


