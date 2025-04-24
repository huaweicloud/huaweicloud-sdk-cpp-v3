

#include "huaweicloud/gaussdb/v3/model/ListTaurusDbNodeProcessesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListTaurusDbNodeProcessesResponse::ListTaurusDbNodeProcessesResponse()
{
    processesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListTaurusDbNodeProcessesResponse::~ListTaurusDbNodeProcessesResponse() = default;

void ListTaurusDbNodeProcessesResponse::validate()
{
}

web::json::value ListTaurusDbNodeProcessesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processesIsSet_) {
        val[utility::conversions::to_string_t("processes")] = ModelBase::toJson(processes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListTaurusDbNodeProcessesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes"));
        if(!fieldValue.is_null())
        {
            std::vector<TaurusDbProcessInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcesses(refVal);
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
    return ok;
}


std::vector<TaurusDbProcessInfo>& ListTaurusDbNodeProcessesResponse::getProcesses()
{
    return processes_;
}

void ListTaurusDbNodeProcessesResponse::setProcesses(const std::vector<TaurusDbProcessInfo>& value)
{
    processes_ = value;
    processesIsSet_ = true;
}

bool ListTaurusDbNodeProcessesResponse::processesIsSet() const
{
    return processesIsSet_;
}

void ListTaurusDbNodeProcessesResponse::unsetprocesses()
{
    processesIsSet_ = false;
}

int32_t ListTaurusDbNodeProcessesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTaurusDbNodeProcessesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTaurusDbNodeProcessesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTaurusDbNodeProcessesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


