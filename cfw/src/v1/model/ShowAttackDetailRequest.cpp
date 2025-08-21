

#include "huaweicloud/cfw/v1/model/ShowAttackDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackDetailRequest::ShowAttackDetailRequest()
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
    item_ = "";
    itemIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ShowAttackDetailRequest::~ShowAttackDetailRequest() = default;

void ShowAttackDetailRequest::validate()
{
}

web::json::value ShowAttackDetailRequest::toJson() const
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
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ShowAttackDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowAttackDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAttackDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAttackDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAttackDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowAttackDetailRequest::getRange() const
{
    return range_;
}

void ShowAttackDetailRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowAttackDetailRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowAttackDetailRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowAttackDetailRequest::getLogType() const
{
    return logType_;
}

void ShowAttackDetailRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowAttackDetailRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowAttackDetailRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

int64_t ShowAttackDetailRequest::getStartTime() const
{
    return startTime_;
}

void ShowAttackDetailRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAttackDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAttackDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAttackDetailRequest::getEndTime() const
{
    return endTime_;
}

void ShowAttackDetailRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAttackDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAttackDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowAttackDetailRequest::getVgwId()
{
    return vgwId_;
}

void ShowAttackDetailRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowAttackDetailRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowAttackDetailRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

int32_t ShowAttackDetailRequest::getAction() const
{
    return action_;
}

void ShowAttackDetailRequest::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowAttackDetailRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowAttackDetailRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string ShowAttackDetailRequest::getItem() const
{
    return item_;
}

void ShowAttackDetailRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowAttackDetailRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowAttackDetailRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::string ShowAttackDetailRequest::getValue() const
{
    return value_;
}

void ShowAttackDetailRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ShowAttackDetailRequest::valueIsSet() const
{
    return valueIsSet_;
}

void ShowAttackDetailRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


