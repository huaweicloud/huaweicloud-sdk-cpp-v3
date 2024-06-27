

#include "huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_ops_window.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstancesInfoRsponse_instance_ops_window::ChInstancesInfoRsponse_instance_ops_window()
{
    period_ = "";
    periodIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ChInstancesInfoRsponse_instance_ops_window::~ChInstancesInfoRsponse_instance_ops_window() = default;

void ChInstancesInfoRsponse_instance_ops_window::validate()
{
}

web::json::value ChInstancesInfoRsponse_instance_ops_window::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ChInstancesInfoRsponse_instance_ops_window::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
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


std::string ChInstancesInfoRsponse_instance_ops_window::getPeriod() const
{
    return period_;
}

void ChInstancesInfoRsponse_instance_ops_window::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_ops_window::periodIsSet() const
{
    return periodIsSet_;
}

void ChInstancesInfoRsponse_instance_ops_window::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance_ops_window::getStartTime() const
{
    return startTime_;
}

void ChInstancesInfoRsponse_instance_ops_window::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_ops_window::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ChInstancesInfoRsponse_instance_ops_window::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance_ops_window::getEndTime() const
{
    return endTime_;
}

void ChInstancesInfoRsponse_instance_ops_window::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_ops_window::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ChInstancesInfoRsponse_instance_ops_window::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


