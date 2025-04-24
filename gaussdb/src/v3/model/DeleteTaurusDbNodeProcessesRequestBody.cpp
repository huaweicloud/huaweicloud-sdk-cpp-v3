

#include "huaweicloud/gaussdb/v3/model/DeleteTaurusDbNodeProcessesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteTaurusDbNodeProcessesRequestBody::DeleteTaurusDbNodeProcessesRequestBody()
{
    processesIsSet_ = false;
}

DeleteTaurusDbNodeProcessesRequestBody::~DeleteTaurusDbNodeProcessesRequestBody() = default;

void DeleteTaurusDbNodeProcessesRequestBody::validate()
{
}

web::json::value DeleteTaurusDbNodeProcessesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processesIsSet_) {
        val[utility::conversions::to_string_t("processes")] = ModelBase::toJson(processes_);
    }

    return val;
}
bool DeleteTaurusDbNodeProcessesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcesses(refVal);
        }
    }
    return ok;
}


std::vector<int64_t>& DeleteTaurusDbNodeProcessesRequestBody::getProcesses()
{
    return processes_;
}

void DeleteTaurusDbNodeProcessesRequestBody::setProcesses(std::vector<int64_t> value)
{
    processes_ = value;
    processesIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesRequestBody::processesIsSet() const
{
    return processesIsSet_;
}

void DeleteTaurusDbNodeProcessesRequestBody::unsetprocesses()
{
    processesIsSet_ = false;
}

}
}
}
}
}


