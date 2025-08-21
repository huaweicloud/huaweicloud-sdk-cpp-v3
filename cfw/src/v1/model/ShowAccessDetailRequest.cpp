

#include "huaweicloud/cfw/v1/model/ShowAccessDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAccessDetailRequest::ShowAccessDetailRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    range_ = 0;
    rangeIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    vgwIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
    itemId_ = "";
    itemIdIsSet_ = false;
}

ShowAccessDetailRequest::~ShowAccessDetailRequest() = default;

void ShowAccessDetailRequest::validate()
{
}

web::json::value ShowAccessDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(rangeIsSet_) {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(range_);
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
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }

    return val;
}
bool ShowAccessDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    return ok;
}


std::string ShowAccessDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAccessDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAccessDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAccessDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowAccessDetailRequest::getRange() const
{
    return range_;
}

void ShowAccessDetailRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowAccessDetailRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowAccessDetailRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowAccessDetailRequest::getDirection() const
{
    return direction_;
}

void ShowAccessDetailRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ShowAccessDetailRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ShowAccessDetailRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ShowAccessDetailRequest::getStartTime() const
{
    return startTime_;
}

void ShowAccessDetailRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAccessDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAccessDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAccessDetailRequest::getEndTime() const
{
    return endTime_;
}

void ShowAccessDetailRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAccessDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAccessDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowAccessDetailRequest::getVgwId()
{
    return vgwId_;
}

void ShowAccessDetailRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowAccessDetailRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowAccessDetailRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowAccessDetailRequest::getLogType() const
{
    return logType_;
}

void ShowAccessDetailRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowAccessDetailRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowAccessDetailRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ShowAccessDetailRequest::getItem() const
{
    return item_;
}

void ShowAccessDetailRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowAccessDetailRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowAccessDetailRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::string ShowAccessDetailRequest::getItemId() const
{
    return itemId_;
}

void ShowAccessDetailRequest::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool ShowAccessDetailRequest::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void ShowAccessDetailRequest::unsetitemId()
{
    itemIdIsSet_ = false;
}

}
}
}
}
}


