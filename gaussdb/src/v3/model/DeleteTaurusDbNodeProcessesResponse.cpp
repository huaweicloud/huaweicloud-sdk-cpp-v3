

#include "huaweicloud/gaussdb/v3/model/DeleteTaurusDbNodeProcessesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteTaurusDbNodeProcessesResponse::DeleteTaurusDbNodeProcessesResponse()
{
    processesKilledIsSet_ = false;
    processesNotFoundIsSet_ = false;
}

DeleteTaurusDbNodeProcessesResponse::~DeleteTaurusDbNodeProcessesResponse() = default;

void DeleteTaurusDbNodeProcessesResponse::validate()
{
}

web::json::value DeleteTaurusDbNodeProcessesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processesKilledIsSet_) {
        val[utility::conversions::to_string_t("processes_killed")] = ModelBase::toJson(processesKilled_);
    }
    if(processesNotFoundIsSet_) {
        val[utility::conversions::to_string_t("processes_not_found")] = ModelBase::toJson(processesNotFound_);
    }

    return val;
}
bool DeleteTaurusDbNodeProcessesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processes_killed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes_killed"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessesKilled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processes_not_found"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processes_not_found"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessesNotFound(refVal);
        }
    }
    return ok;
}


std::vector<int64_t>& DeleteTaurusDbNodeProcessesResponse::getProcessesKilled()
{
    return processesKilled_;
}

void DeleteTaurusDbNodeProcessesResponse::setProcessesKilled(std::vector<int64_t> value)
{
    processesKilled_ = value;
    processesKilledIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesResponse::processesKilledIsSet() const
{
    return processesKilledIsSet_;
}

void DeleteTaurusDbNodeProcessesResponse::unsetprocessesKilled()
{
    processesKilledIsSet_ = false;
}

std::vector<int64_t>& DeleteTaurusDbNodeProcessesResponse::getProcessesNotFound()
{
    return processesNotFound_;
}

void DeleteTaurusDbNodeProcessesResponse::setProcessesNotFound(std::vector<int64_t> value)
{
    processesNotFound_ = value;
    processesNotFoundIsSet_ = true;
}

bool DeleteTaurusDbNodeProcessesResponse::processesNotFoundIsSet() const
{
    return processesNotFoundIsSet_;
}

void DeleteTaurusDbNodeProcessesResponse::unsetprocessesNotFound()
{
    processesNotFoundIsSet_ = false;
}

}
}
}
}
}


