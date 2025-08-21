

#include "huaweicloud/cfw/v1/model/ShowFlowTrendRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowTrendRequest::ShowFlowTrendRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    range_ = 0;
    rangeIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    vgwIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    ipIsSet_ = false;
    vpcIsSet_ = false;
}

ShowFlowTrendRequest::~ShowFlowTrendRequest() = default;

void ShowFlowTrendRequest::validate()
{
}

web::json::value ShowFlowTrendRequest::toJson() const
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
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
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
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}
bool ShowFlowTrendRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    return ok;
}


std::string ShowFlowTrendRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowFlowTrendRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowFlowTrendRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowFlowTrendRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowFlowTrendRequest::getRange() const
{
    return range_;
}

void ShowFlowTrendRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowFlowTrendRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowFlowTrendRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowFlowTrendRequest::getLogType() const
{
    return logType_;
}

void ShowFlowTrendRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowFlowTrendRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowFlowTrendRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ShowFlowTrendRequest::getDirection() const
{
    return direction_;
}

void ShowFlowTrendRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ShowFlowTrendRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ShowFlowTrendRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ShowFlowTrendRequest::getStartTime() const
{
    return startTime_;
}

void ShowFlowTrendRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowFlowTrendRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowFlowTrendRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowFlowTrendRequest::getEndTime() const
{
    return endTime_;
}

void ShowFlowTrendRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowFlowTrendRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowFlowTrendRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowFlowTrendRequest::getVgwId()
{
    return vgwId_;
}

void ShowFlowTrendRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowFlowTrendRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowFlowTrendRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowFlowTrendRequest::getAssetType() const
{
    return assetType_;
}

void ShowFlowTrendRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowFlowTrendRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowFlowTrendRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::vector<std::string>& ShowFlowTrendRequest::getIp()
{
    return ip_;
}

void ShowFlowTrendRequest::setIp(const std::vector<std::string>& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowFlowTrendRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ShowFlowTrendRequest::unsetip()
{
    ipIsSet_ = false;
}

std::vector<std::string>& ShowFlowTrendRequest::getVpc()
{
    return vpc_;
}

void ShowFlowTrendRequest::setVpc(const std::vector<std::string>& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool ShowFlowTrendRequest::vpcIsSet() const
{
    return vpcIsSet_;
}

void ShowFlowTrendRequest::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


