

#include "huaweicloud/iotdm/v5/model/OperateWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




OperateWindow::OperateWindow()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

OperateWindow::~OperateWindow() = default;

void OperateWindow::validate()
{
}

web::json::value OperateWindow::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool OperateWindow::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OperateWindow::getStartTime() const
{
    return startTime_;
}

void OperateWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OperateWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OperateWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string OperateWindow::getEndTime() const
{
    return endTime_;
}

void OperateWindow::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool OperateWindow::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void OperateWindow::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


