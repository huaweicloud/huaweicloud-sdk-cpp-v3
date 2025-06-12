

#include "huaweicloud/metastudio/v1/model/ReportLiveEventReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ReportLiveEventReq::ReportLiveEventReq()
{
    total_ = 0;
    totalIsSet_ = false;
    eventsIsSet_ = false;
    reviewConfigIsSet_ = false;
}

ReportLiveEventReq::~ReportLiveEventReq() = default;

void ReportLiveEventReq::validate()
{
}

web::json::value ReportLiveEventReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }

    return val;
}
bool ReportLiveEventReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveEvent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    return ok;
}


int32_t ReportLiveEventReq::getTotal() const
{
    return total_;
}

void ReportLiveEventReq::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ReportLiveEventReq::totalIsSet() const
{
    return totalIsSet_;
}

void ReportLiveEventReq::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<LiveEvent>& ReportLiveEventReq::getEvents()
{
    return events_;
}

void ReportLiveEventReq::setEvents(const std::vector<LiveEvent>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool ReportLiveEventReq::eventsIsSet() const
{
    return eventsIsSet_;
}

void ReportLiveEventReq::unsetevents()
{
    eventsIsSet_ = false;
}

ReviewConfig ReportLiveEventReq::getReviewConfig() const
{
    return reviewConfig_;
}

void ReportLiveEventReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ReportLiveEventReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ReportLiveEventReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

}
}
}
}
}


