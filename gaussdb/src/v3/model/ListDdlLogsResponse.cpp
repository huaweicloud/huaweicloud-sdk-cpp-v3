

#include "huaweicloud/gaussdb/v3/model/ListDdlLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListDdlLogsResponse::ListDdlLogsResponse()
{
    ddlLogsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

ListDdlLogsResponse::~ListDdlLogsResponse() = default;

void ListDdlLogsResponse::validate()
{
}

web::json::value ListDdlLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddlLogsIsSet_) {
        val[utility::conversions::to_string_t("ddl_logs")] = ModelBase::toJson(ddlLogs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool ListDdlLogsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
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


std::vector<DdlLogInfo>& ListDdlLogsResponse::getDdlLogs()
{
    return ddlLogs_;
}

void ListDdlLogsResponse::setDdlLogs(const std::vector<DdlLogInfo>& value)
{
    ddlLogs_ = value;
    ddlLogsIsSet_ = true;
}

bool ListDdlLogsResponse::ddlLogsIsSet() const
{
    return ddlLogsIsSet_;
}

void ListDdlLogsResponse::unsetddlLogs()
{
    ddlLogsIsSet_ = false;
}

int32_t ListDdlLogsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDdlLogsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDdlLogsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDdlLogsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListDdlLogsResponse::getKeepDays() const
{
    return keepDays_;
}

void ListDdlLogsResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ListDdlLogsResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ListDdlLogsResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string ListDdlLogsResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void ListDdlLogsResponse::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool ListDdlLogsResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void ListDdlLogsResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


