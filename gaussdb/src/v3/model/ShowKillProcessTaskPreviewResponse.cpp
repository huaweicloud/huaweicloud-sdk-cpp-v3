

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessTaskPreviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessTaskPreviewResponse::ShowKillProcessTaskPreviewResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    processesIsSet_ = false;
}

ShowKillProcessTaskPreviewResponse::~ShowKillProcessTaskPreviewResponse() = default;

void ShowKillProcessTaskPreviewResponse::validate()
{
}

web::json::value ShowKillProcessTaskPreviewResponse::toJson() const
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
bool ShowKillProcessTaskPreviewResponse::fromJson(const web::json::value& val)
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
            std::vector<ProcessDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcesses(refVal);
        }
    }
    return ok;
}


int32_t ShowKillProcessTaskPreviewResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowKillProcessTaskPreviewResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowKillProcessTaskPreviewResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowKillProcessTaskPreviewResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ProcessDetail>& ShowKillProcessTaskPreviewResponse::getProcesses()
{
    return processes_;
}

void ShowKillProcessTaskPreviewResponse::setProcesses(const std::vector<ProcessDetail>& value)
{
    processes_ = value;
    processesIsSet_ = true;
}

bool ShowKillProcessTaskPreviewResponse::processesIsSet() const
{
    return processesIsSet_;
}

void ShowKillProcessTaskPreviewResponse::unsetprocesses()
{
    processesIsSet_ = false;
}

}
}
}
}
}


