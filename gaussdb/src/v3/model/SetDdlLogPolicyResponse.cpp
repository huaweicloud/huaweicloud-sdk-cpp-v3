

#include "huaweicloud/gaussdb/v3/model/SetDdlLogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetDdlLogPolicyResponse::SetDdlLogPolicyResponse()
{
    ddlLogsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    keeyDays_ = 0;
    keeyDaysIsSet_ = false;
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

SetDdlLogPolicyResponse::~SetDdlLogPolicyResponse() = default;

void SetDdlLogPolicyResponse::validate()
{
}

web::json::value SetDdlLogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddlLogsIsSet_) {
        val[utility::conversions::to_string_t("ddl_logs")] = ModelBase::toJson(ddlLogs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(keeyDaysIsSet_) {
        val[utility::conversions::to_string_t("keey_days")] = ModelBase::toJson(keeyDays_);
    }
    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool SetDdlLogPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ddl_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<DdlLogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keey_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keey_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeeyDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    return ok;
}


std::vector<DdlLogInfo>& SetDdlLogPolicyResponse::getDdlLogs()
{
    return ddlLogs_;
}

void SetDdlLogPolicyResponse::setDdlLogs(const std::vector<DdlLogInfo>& value)
{
    ddlLogs_ = value;
    ddlLogsIsSet_ = true;
}

bool SetDdlLogPolicyResponse::ddlLogsIsSet() const
{
    return ddlLogsIsSet_;
}

void SetDdlLogPolicyResponse::unsetddlLogs()
{
    ddlLogsIsSet_ = false;
}

int32_t SetDdlLogPolicyResponse::getTotalCount() const
{
    return totalCount_;
}

void SetDdlLogPolicyResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool SetDdlLogPolicyResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void SetDdlLogPolicyResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t SetDdlLogPolicyResponse::getKeeyDays() const
{
    return keeyDays_;
}

void SetDdlLogPolicyResponse::setKeeyDays(int32_t value)
{
    keeyDays_ = value;
    keeyDaysIsSet_ = true;
}

bool SetDdlLogPolicyResponse::keeyDaysIsSet() const
{
    return keeyDaysIsSet_;
}

void SetDdlLogPolicyResponse::unsetkeeyDays()
{
    keeyDaysIsSet_ = false;
}

std::string SetDdlLogPolicyResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void SetDdlLogPolicyResponse::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool SetDdlLogPolicyResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void SetDdlLogPolicyResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


