

#include "huaweicloud/cfw/v1/model/ShowAttackTopRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTopRequest::ShowAttackTopRequest()
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
    action_ = 0;
    actionIsSet_ = false;
    itemIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ShowAttackTopRequest::~ShowAttackTopRequest() = default;

void ShowAttackTopRequest::validate()
{
}

web::json::value ShowAttackTopRequest::toJson() const
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
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ShowAttackTopRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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


std::string ShowAttackTopRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAttackTopRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAttackTopRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAttackTopRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowAttackTopRequest::getRange() const
{
    return range_;
}

void ShowAttackTopRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowAttackTopRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowAttackTopRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowAttackTopRequest::getLogType() const
{
    return logType_;
}

void ShowAttackTopRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowAttackTopRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowAttackTopRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

int64_t ShowAttackTopRequest::getStartTime() const
{
    return startTime_;
}

void ShowAttackTopRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAttackTopRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAttackTopRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAttackTopRequest::getEndTime() const
{
    return endTime_;
}

void ShowAttackTopRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAttackTopRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAttackTopRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowAttackTopRequest::getVgwId()
{
    return vgwId_;
}

void ShowAttackTopRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowAttackTopRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowAttackTopRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

int32_t ShowAttackTopRequest::getAction() const
{
    return action_;
}

void ShowAttackTopRequest::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowAttackTopRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowAttackTopRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& ShowAttackTopRequest::getItem()
{
    return item_;
}

void ShowAttackTopRequest::setItem(const std::vector<std::string>& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowAttackTopRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowAttackTopRequest::unsetitem()
{
    itemIsSet_ = false;
}

int32_t ShowAttackTopRequest::getSize() const
{
    return size_;
}

void ShowAttackTopRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowAttackTopRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowAttackTopRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


