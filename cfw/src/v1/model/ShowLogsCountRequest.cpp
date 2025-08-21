

#include "huaweicloud/cfw/v1/model/ShowLogsCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowLogsCountRequest::ShowLogsCountRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    range_ = 0;
    rangeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    vgwIdIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
}

ShowLogsCountRequest::~ShowLogsCountRequest() = default;

void ShowLogsCountRequest::validate()
{
}

web::json::value ShowLogsCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(rangeIsSet_) {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(range_);
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

    return val;
}
bool ShowLogsCountRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowLogsCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowLogsCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowLogsCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowLogsCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ShowLogsCountRequest::getRange() const
{
    return range_;
}

void ShowLogsCountRequest::setRange(int32_t value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool ShowLogsCountRequest::rangeIsSet() const
{
    return rangeIsSet_;
}

void ShowLogsCountRequest::unsetrange()
{
    rangeIsSet_ = false;
}

int64_t ShowLogsCountRequest::getStartTime() const
{
    return startTime_;
}

void ShowLogsCountRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowLogsCountRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowLogsCountRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowLogsCountRequest::getEndTime() const
{
    return endTime_;
}

void ShowLogsCountRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowLogsCountRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowLogsCountRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ShowLogsCountRequest::getVgwId()
{
    return vgwId_;
}

void ShowLogsCountRequest::setVgwId(const std::vector<std::string>& value)
{
    vgwId_ = value;
    vgwIdIsSet_ = true;
}

bool ShowLogsCountRequest::vgwIdIsSet() const
{
    return vgwIdIsSet_;
}

void ShowLogsCountRequest::unsetvgwId()
{
    vgwIdIsSet_ = false;
}

std::string ShowLogsCountRequest::getItem() const
{
    return item_;
}

void ShowLogsCountRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ShowLogsCountRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ShowLogsCountRequest::unsetitem()
{
    itemIsSet_ = false;
}

}
}
}
}
}


