

#include "huaweicloud/cfw/v1/model/GetCreateFirewallJobResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




GetCreateFirewallJobResponseData::GetCreateFirewallJobResponseData()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTimeIsSet_ = false;
    endTimeIsSet_ = false;
}

GetCreateFirewallJobResponseData::~GetCreateFirewallJobResponseData() = default;

void GetCreateFirewallJobResponseData::validate()
{
}

web::json::value GetCreateFirewallJobResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool GetCreateFirewallJobResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string GetCreateFirewallJobResponseData::getId() const
{
    return id_;
}

void GetCreateFirewallJobResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetCreateFirewallJobResponseData::idIsSet() const
{
    return idIsSet_;
}

void GetCreateFirewallJobResponseData::unsetid()
{
    idIsSet_ = false;
}

std::string GetCreateFirewallJobResponseData::getStatus() const
{
    return status_;
}

void GetCreateFirewallJobResponseData::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetCreateFirewallJobResponseData::statusIsSet() const
{
    return statusIsSet_;
}

void GetCreateFirewallJobResponseData::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime GetCreateFirewallJobResponseData::getBeginTime() const
{
    return beginTime_;
}

void GetCreateFirewallJobResponseData::setBeginTime(const utility::datetime& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool GetCreateFirewallJobResponseData::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void GetCreateFirewallJobResponseData::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

utility::datetime GetCreateFirewallJobResponseData::getEndTime() const
{
    return endTime_;
}

void GetCreateFirewallJobResponseData::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool GetCreateFirewallJobResponseData::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void GetCreateFirewallJobResponseData::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


