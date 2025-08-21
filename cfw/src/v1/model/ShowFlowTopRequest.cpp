

#include "huaweicloud/cfw/v1/model/ShowFlowTopRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowTopRequest::ShowFlowTopRequest()
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
    itemIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ShowFlowTopRequest::~ShowFlowTopRequest() = default;

void ShowFlowTopRequest::validate()
{
}

web::json::value ShowFlowTopRequest::toJson() const
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
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ShowFlowTopRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ShowFlowTopRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowFlowTopRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowFlowTopRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowFlowTopRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowFlowTopRequest::getRange() const
{
    return range_;
}

void ShowFlowTopRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowFlowTopRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowFlowTopRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowFlowTopRequest::getLogType() const
{
    return logType_;
}

void ShowFlowTopRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowFlowTopRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowFlowTopRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ShowFlowTopRequest::getDirection() const
{
    return direction_;
}

void ShowFlowTopRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ShowFlowTopRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ShowFlowTopRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ShowFlowTopRequest::getStartTime() const
{
    return startTime_;
}

void ShowFlowTopRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowFlowTopRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowFlowTopRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowFlowTopRequest::getEndTime() const
{
    return endTime_;
}

void ShowFlowTopRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowFlowTopRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowFlowTopRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowFlowTopRequest::getVgwId()
{
    return vgwId_;
}

void ShowFlowTopRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowFlowTopRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowFlowTopRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowFlowTopRequest::getAssetType() const
{
    return assetType_;
}

void ShowFlowTopRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowFlowTopRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowFlowTopRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::vector<std::string>& ShowFlowTopRequest::getItem()
{
    return item_;
}

void ShowFlowTopRequest::setItem(const std::vector<std::string>& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowFlowTopRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowFlowTopRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::string ShowFlowTopRequest::getOrder() const
{
    return order_;
}

void ShowFlowTopRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowFlowTopRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ShowFlowTopRequest::unsetorder()
{
    orderIsSet_ = false;
}

int32_t ShowFlowTopRequest::getSize() const
{
    return size_;
}

void ShowFlowTopRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowFlowTopRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowFlowTopRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


