

#include "huaweicloud/cfw/v1/model/ShowTrafficTrendRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowTrafficTrendRequest::ShowTrafficTrendRequest()
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
    aggType_ = "";
    aggTypeIsSet_ = false;
    ipIsSet_ = false;
}

ShowTrafficTrendRequest::~ShowTrafficTrendRequest() = default;

void ShowTrafficTrendRequest::validate()
{
}

web::json::value ShowTrafficTrendRequest::toJson() const
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
    if(aggTypeIsSet_) {
        val[utility::conversions::to_string_t("agg_type")] = ModelBase::toJson(aggType_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ShowTrafficTrendRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agg_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::string ShowTrafficTrendRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowTrafficTrendRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowTrafficTrendRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowTrafficTrendRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowTrafficTrendRequest::getRange() const
{
    return range_;
}

void ShowTrafficTrendRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowTrafficTrendRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowTrafficTrendRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowTrafficTrendRequest::getLogType() const
{
    return logType_;
}

void ShowTrafficTrendRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowTrafficTrendRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowTrafficTrendRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

int64_t ShowTrafficTrendRequest::getStartTime() const
{
    return startTime_;
}

void ShowTrafficTrendRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTrafficTrendRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTrafficTrendRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowTrafficTrendRequest::getEndTime() const
{
    return endTime_;
}

void ShowTrafficTrendRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTrafficTrendRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTrafficTrendRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowTrafficTrendRequest::getVgwId()
{
    return vgwId_;
}

void ShowTrafficTrendRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowTrafficTrendRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowTrafficTrendRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowTrafficTrendRequest::getAggType() const
{
    return aggType_;
}

void ShowTrafficTrendRequest::setAggType(const std::string& value)
{
    aggType_ = value;
    aggTypeIsSet_ = true;
}

bool ShowTrafficTrendRequest::aggTypeIsSet() const
{
    return aggTypeIsSet_;
}

void ShowTrafficTrendRequest::unsetaggType()
{
    aggTypeIsSet_ = false;
}

std::vector<std::string>& ShowTrafficTrendRequest::getIp()
{
    return ip_;
}

void ShowTrafficTrendRequest::setIp(const std::vector<std::string>& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowTrafficTrendRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ShowTrafficTrendRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


