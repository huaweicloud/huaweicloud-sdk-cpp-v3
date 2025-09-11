

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowWdrSnapshotStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowWdrSnapshotStatusResponse::ShowWdrSnapshotStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowWdrSnapshotStatusResponse::~ShowWdrSnapshotStatusResponse() = default;

void ShowWdrSnapshotStatusResponse::validate()
{
}

web::json::value ShowWdrSnapshotStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowWdrSnapshotStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ShowWdrSnapshotStatusResponse::getStatus() const
{
    return status_;
}

void ShowWdrSnapshotStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowWdrSnapshotStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowWdrSnapshotStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowWdrSnapshotStatusResponse::getStartTime() const
{
    return startTime_;
}

void ShowWdrSnapshotStatusResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowWdrSnapshotStatusResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowWdrSnapshotStatusResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowWdrSnapshotStatusResponse::getEndTime() const
{
    return endTime_;
}

void ShowWdrSnapshotStatusResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowWdrSnapshotStatusResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowWdrSnapshotStatusResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


