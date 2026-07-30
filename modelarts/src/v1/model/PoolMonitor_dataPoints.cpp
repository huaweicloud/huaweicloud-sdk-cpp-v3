

#include "huaweicloud/modelarts/v1/model/PoolMonitor_dataPoints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMonitor_dataPoints::PoolMonitor_dataPoints()
{
    timestamp_ = 0;
    timestampIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    statisticsIsSet_ = false;
}

PoolMonitor_dataPoints::~PoolMonitor_dataPoints() = default;

void PoolMonitor_dataPoints::validate()
{
}

web::json::value PoolMonitor_dataPoints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool PoolMonitor_dataPoints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolMonitor_statistics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


int32_t PoolMonitor_dataPoints::getTimestamp() const
{
    return timestamp_;
}

void PoolMonitor_dataPoints::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool PoolMonitor_dataPoints::timestampIsSet() const
{
    return timestampIsSet_;
}

void PoolMonitor_dataPoints::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string PoolMonitor_dataPoints::getUnit() const
{
    return unit_;
}

void PoolMonitor_dataPoints::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool PoolMonitor_dataPoints::unitIsSet() const
{
    return unitIsSet_;
}

void PoolMonitor_dataPoints::unsetunit()
{
    unitIsSet_ = false;
}

std::vector<PoolMonitor_statistics>& PoolMonitor_dataPoints::getStatistics()
{
    return statistics_;
}

void PoolMonitor_dataPoints::setStatistics(const std::vector<PoolMonitor_statistics>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool PoolMonitor_dataPoints::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void PoolMonitor_dataPoints::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


