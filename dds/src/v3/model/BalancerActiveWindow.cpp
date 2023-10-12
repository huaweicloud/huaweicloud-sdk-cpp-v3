

#include "huaweicloud/dds/v3/model/BalancerActiveWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BalancerActiveWindow::BalancerActiveWindow()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    stopTime_ = "";
    stopTimeIsSet_ = false;
}

BalancerActiveWindow::~BalancerActiveWindow() = default;

void BalancerActiveWindow::validate()
{
}

web::json::value BalancerActiveWindow::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(stopTimeIsSet_) {
        val[utility::conversions::to_string_t("stop_time")] = ModelBase::toJson(stopTime_);
    }

    return val;
}
bool BalancerActiveWindow::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stop_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stop_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStopTime(refVal);
        }
    }
    return ok;
}


std::string BalancerActiveWindow::getStartTime() const
{
    return startTime_;
}

void BalancerActiveWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BalancerActiveWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BalancerActiveWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BalancerActiveWindow::getStopTime() const
{
    return stopTime_;
}

void BalancerActiveWindow::setStopTime(const std::string& value)
{
    stopTime_ = value;
    stopTimeIsSet_ = true;
}

bool BalancerActiveWindow::stopTimeIsSet() const
{
    return stopTimeIsSet_;
}

void BalancerActiveWindow::unsetstopTime()
{
    stopTimeIsSet_ = false;
}

}
}
}
}
}


