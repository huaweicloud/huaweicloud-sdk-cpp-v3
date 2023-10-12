

#include "huaweicloud/gaussdb/v3/model/ModifyOpsWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyOpsWindow::ModifyOpsWindow()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ModifyOpsWindow::~ModifyOpsWindow() = default;

void ModifyOpsWindow::validate()
{
}

web::json::value ModifyOpsWindow::toJson() const
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
bool ModifyOpsWindow::fromJson(const web::json::value& val)
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


std::string ModifyOpsWindow::getStartTime() const
{
    return startTime_;
}

void ModifyOpsWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyOpsWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyOpsWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ModifyOpsWindow::getEndTime() const
{
    return endTime_;
}

void ModifyOpsWindow::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyOpsWindow::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyOpsWindow::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


