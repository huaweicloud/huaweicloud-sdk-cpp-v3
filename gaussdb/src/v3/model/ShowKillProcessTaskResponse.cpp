

#include "huaweicloud/gaussdb/v3/model/ShowKillProcessTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKillProcessTaskResponse::ShowKillProcessTaskResponse()
{
    processesIsSet_ = false;
}

ShowKillProcessTaskResponse::~ShowKillProcessTaskResponse() = default;

void ShowKillProcessTaskResponse::validate()
{
}

web::json::value ShowKillProcessTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processesIsSet_) {
        val[utility::conversions::to_string_t("processes")] = ModelBase::toJson(processes_);
    }

    return val;
}
bool ShowKillProcessTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes"));
        if(!fieldValue.is_null())
        {
            std::vector<KillProcessItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcesses(refVal);
        }
    }
    return ok;
}


std::vector<KillProcessItem>& ShowKillProcessTaskResponse::getProcesses()
{
    return processes_;
}

void ShowKillProcessTaskResponse::setProcesses(const std::vector<KillProcessItem>& value)
{
    processes_ = value;
    processesIsSet_ = true;
}

bool ShowKillProcessTaskResponse::processesIsSet() const
{
    return processesIsSet_;
}

void ShowKillProcessTaskResponse::unsetprocesses()
{
    processesIsSet_ = false;
}

}
}
}
}
}


