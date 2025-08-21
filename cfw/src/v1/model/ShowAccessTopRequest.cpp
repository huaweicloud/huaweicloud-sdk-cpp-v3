

#include "huaweicloud/cfw/v1/model/ShowAccessTopRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAccessTopRequest::ShowAccessTopRequest()
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
    ruleIdIsSet_ = false;
}

ShowAccessTopRequest::~ShowAccessTopRequest() = default;

void ShowAccessTopRequest::validate()
{
}

web::json::value ShowAccessTopRequest::toJson() const
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
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}
bool ShowAccessTopRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    return ok;
}


std::string ShowAccessTopRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAccessTopRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAccessTopRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAccessTopRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowAccessTopRequest::getRange() const
{
    return range_;
}

void ShowAccessTopRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowAccessTopRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowAccessTopRequest::unsetrange()
{
    rangeIsSet_ = false;
}

std::string ShowAccessTopRequest::getDirection() const
{
    return direction_;
}

void ShowAccessTopRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool ShowAccessTopRequest::directionIsSet() const
{
    return directionIsSet_;
}

void ShowAccessTopRequest::unsetdirection()
{
    directionIsSet_ = false;
}

int64_t ShowAccessTopRequest::getStartTime() const
{
    return startTime_;
}

void ShowAccessTopRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAccessTopRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAccessTopRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowAccessTopRequest::getEndTime() const
{
    return endTime_;
}

void ShowAccessTopRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAccessTopRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAccessTopRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowAccessTopRequest::getVgwId()
{
    return vgwId_;
}

void ShowAccessTopRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowAccessTopRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowAccessTopRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowAccessTopRequest::getLogType() const
{
    return logType_;
}

void ShowAccessTopRequest::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool ShowAccessTopRequest::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void ShowAccessTopRequest::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string ShowAccessTopRequest::getItem() const
{
    return item_;
}

void ShowAccessTopRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowAccessTopRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowAccessTopRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::vector<std::string>& ShowAccessTopRequest::getRuleId()
{
    return ruleId_;
}

void ShowAccessTopRequest::setRuleId(const std::vector<std::string>& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowAccessTopRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowAccessTopRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


