

#include "huaweicloud/dds/v3/model/DeleteManualBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteManualBackupResponse::DeleteManualBackupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteManualBackupResponse::~DeleteManualBackupResponse() = default;

void DeleteManualBackupResponse::validate()
{
}

web::json::value DeleteManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}

std::string DeleteManualBackupResponse::getJobId() const
{
    return jobId_;
}

void DeleteManualBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteManualBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteManualBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


