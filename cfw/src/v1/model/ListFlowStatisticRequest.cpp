

#include "huaweicloud/cfw/v1/model/ListFlowStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFlowStatisticRequest::ListFlowStatisticRequest()
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
    size_ = 0;
    sizeIsSet_ = false;
}

ListFlowStatisticRequest::~ListFlowStatisticRequest() = default;

void ListFlowStatisticRequest::validate()
{
}

web::json::value ListFlowStatisticRequest::toJson() const
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
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListFlowStatisticRequest::fromJson(const web::json::value& val)
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


std::string ListFlowStatisticRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListFlowStatisticRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListFlowStatisticRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListFlowStatisticRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListFlowStatisticRequest::getRange() const
{
    return range_;
}

void ListFlowStatisticRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ListFlowStatisticRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ListFlowStatisticRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ListFlowStatisticRequest::getLogType() const
{
    return logType_;
}

void ListFlowStatisticRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListFlowStatisticRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListFlowStatisticRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ListFlowStatisticRequest::getDirection() const
{
    return direction_;
}

void ListFlowStatisticRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListFlowStatisticRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListFlowStatisticRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ListFlowStatisticRequest::getStartTime() const
{
    return startTime_;
}

void ListFlowStatisticRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListFlowStatisticRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListFlowStatisticRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListFlowStatisticRequest::getEndTime() const
{
    return endTime_;
}

void ListFlowStatisticRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListFlowStatisticRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListFlowStatisticRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ListFlowStatisticRequest::getVgwId()
{
    return vgwId_;
}

void ListFlowStatisticRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ListFlowStatisticRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ListFlowStatisticRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ListFlowStatisticRequest::getAssetType() const
{
    return assetType_;
}

void ListFlowStatisticRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ListFlowStatisticRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ListFlowStatisticRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ListFlowStatisticRequest::getItem() const
{
    return item_;
}

void ListFlowStatisticRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ListFlowStatisticRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ListFlowStatisticRequest::unsetitem()
{
    itemIsSet_ = false;
}

int32_t ListFlowStatisticRequest::getSize() const
{
    return size_;
}

void ListFlowStatisticRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListFlowStatisticRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListFlowStatisticRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


