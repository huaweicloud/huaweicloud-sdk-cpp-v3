

#include "huaweicloud/live/v1/model/SCTE35StatisticReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SCTE35StatisticReq::SCTE35StatisticReq()
{
    type_ = "";
    typeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

SCTE35StatisticReq::~SCTE35StatisticReq() = default;

void SCTE35StatisticReq::validate()
{
}

web::json::value SCTE35StatisticReq::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool SCTE35StatisticReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string SCTE35StatisticReq::getType() const
{
    return type_;
}

void SCTE35StatisticReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SCTE35StatisticReq::typeIsSet() const
{
    return typeIsSet_;
}

void SCTE35StatisticReq::unsettype()
{
    typeIsSet_ = false;
}

int64_t SCTE35StatisticReq::getStartTime() const
{
    return startTime_;
}

void SCTE35StatisticReq::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SCTE35StatisticReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SCTE35StatisticReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t SCTE35StatisticReq::getEndTime() const
{
    return endTime_;
}

void SCTE35StatisticReq::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SCTE35StatisticReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SCTE35StatisticReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


