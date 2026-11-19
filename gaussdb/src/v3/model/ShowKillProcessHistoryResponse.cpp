

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessHistoryResponse::ShowKillProcessHistoryResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    processesIsSet_ = false;
}

ShowKillProcessHistoryResponse::~ShowKillProcessHistoryResponse() = default;

void ShowKillProcessHistoryResponse::validate()
{
}

web::json::value ShowKillProcessHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(processesIsSet_) {
        val[utility::conversions::to_string_t("processes")] = ModelBase::toJson(processes_);
    }

    return val;
}
bool ShowKillProcessHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes"));
        if(!fieldValue.is_null())
        {
            std::vector<KillProcessHistoryItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcesses(refVal);
        }
    }
    return ok;
}


int32_t ShowKillProcessHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowKillProcessHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowKillProcessHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowKillProcessHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<KillProcessHistoryItem>& ShowKillProcessHistoryResponse::getProcesses()
{
    return processes_;
}

void ShowKillProcessHistoryResponse::setProcesses(const std::vector<KillProcessHistoryItem>& value)
{
    processes_ = value;
    processesIsSet_ = true;
}

bool ShowKillProcessHistoryResponse::processesIsSet() const
{
    return processesIsSet_;
}

void ShowKillProcessHistoryResponse::unsetprocesses()
{
    processesIsSet_ = false;
}

}
}
}
}
}


