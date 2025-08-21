

#include "huaweicloud/cfw/v1/model/ListAttackStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAttackStatisticRequest::ListAttackStatisticRequest()
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
    item_ = "";
    itemIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListAttackStatisticRequest::~ListAttackStatisticRequest() = default;

void ListAttackStatisticRequest::validate()
{
}

web::json::value ListAttackStatisticRequest::toJson() const
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
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListAttackStatisticRequest::fromJson(const web::json::value& val)
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


std::string ListAttackStatisticRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAttackStatisticRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAttackStatisticRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAttackStatisticRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListAttackStatisticRequest::getRange() const
{
    return range_;
}

void ListAttackStatisticRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ListAttackStatisticRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ListAttackStatisticRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ListAttackStatisticRequest::getLogType() const
{
    return logType_;
}

void ListAttackStatisticRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ListAttackStatisticRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ListAttackStatisticRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ListAttackStatisticRequest::getDirection() const
{
    return direction_;
}

void ListAttackStatisticRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ListAttackStatisticRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ListAttackStatisticRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ListAttackStatisticRequest::getStartTime() const
{
    return startTime_;
}

void ListAttackStatisticRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAttackStatisticRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAttackStatisticRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListAttackStatisticRequest::getEndTime() const
{
    return endTime_;
}

void ListAttackStatisticRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAttackStatisticRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAttackStatisticRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ListAttackStatisticRequest::getVgwId()
{
    return vgwId_;
}

void ListAttackStatisticRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ListAttackStatisticRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ListAttackStatisticRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ListAttackStatisticRequest::getItem() const
{
    return item_;
}

void ListAttackStatisticRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ListAttackStatisticRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ListAttackStatisticRequest::unsetitem()
{
    itemIsSet_ = false;
}

int32_t ListAttackStatisticRequest::getSize() const
{
    return size_;
}

void ListAttackStatisticRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAttackStatisticRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAttackStatisticRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


