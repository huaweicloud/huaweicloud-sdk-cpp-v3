

#include "huaweicloud/cfw/v1/model/ShowAttackTotalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTotalRequest::ShowAttackTotalRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    range_ = 0;
    rangeIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    vgwIdIsSet_ = false;
}

ShowAttackTotalRequest::~ShowAttackTotalRequest() = default;

void ShowAttackTotalRequest::validate()
{
}

web::json::value ShowAttackTotalRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(rangeIsSet_) {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(range_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(vgwIdIsSet_) {
        val[utility::conversions::to_string_t("vgw_id")] = ModelBase::toJson(vgwId_);
    }

    return val;
}
bool ShowAttackTotalRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vgw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vgw_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVgwId(refVal);
        }
    }
    return ok;
}


std::string ShowAttackTotalRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAttackTotalRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAttackTotalRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAttackTotalRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowAttackTotalRequest::getRange() const
{
    return range_;
}

void ShowAttackTotalRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowAttackTotalRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowAttackTotalRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowAttackTotalRequest::getLogType() const
{
    return logType_;
}

void ShowAttackTotalRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowAttackTotalRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowAttackTotalRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

int64_t ShowAttackTotalRequest::getStartTime() const
{
    return startTime_;
}

void ShowAttackTotalRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAttackTotalRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAttackTotalRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAttackTotalRequest::getEndTime() const
{
    return endTime_;
}

void ShowAttackTotalRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAttackTotalRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAttackTotalRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowAttackTotalRequest::getVgwId()
{
    return vgwId_;
}

void ShowAttackTotalRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowAttackTotalRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowAttackTotalRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

}
}
}
}
}


