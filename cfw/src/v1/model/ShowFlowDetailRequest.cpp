

#include "huaweicloud/cfw/v1/model/ShowFlowDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowDetailRequest::ShowFlowDetailRequest()
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
    item_ = "";
    itemIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ShowFlowDetailRequest::~ShowFlowDetailRequest() = default;

void ShowFlowDetailRequest::validate()
{
}

web::json::value ShowFlowDetailRequest::toJson() const
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
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ShowFlowDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ShowFlowDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowFlowDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowFlowDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowFlowDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowFlowDetailRequest::getRange() const
{
    return range_;
}

void ShowFlowDetailRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowFlowDetailRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowFlowDetailRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowFlowDetailRequest::getLogType() const
{
    return logType_;
}

void ShowFlowDetailRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowFlowDetailRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowFlowDetailRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ShowFlowDetailRequest::getDirection() const
{
    return direction_;
}

void ShowFlowDetailRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ShowFlowDetailRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ShowFlowDetailRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ShowFlowDetailRequest::getStartTime() const
{
    return startTime_;
}

void ShowFlowDetailRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowFlowDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowFlowDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowFlowDetailRequest::getEndTime() const
{
    return endTime_;
}

void ShowFlowDetailRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowFlowDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowFlowDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowFlowDetailRequest::getVgwId()
{
    return vgwId_;
}

void ShowFlowDetailRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowFlowDetailRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowFlowDetailRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowFlowDetailRequest::getAssetType() const
{
    return assetType_;
}

void ShowFlowDetailRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowFlowDetailRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowFlowDetailRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ShowFlowDetailRequest::getItem() const
{
    return item_;
}

void ShowFlowDetailRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowFlowDetailRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowFlowDetailRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::string ShowFlowDetailRequest::getValue() const
{
    return value_;
}

void ShowFlowDetailRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ShowFlowDetailRequest::valueIsSet() const
{
    return valueIsSet_;
}

void ShowFlowDetailRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


