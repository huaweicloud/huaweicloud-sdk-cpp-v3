

#include "huaweicloud/gaussdb/v3/model/DeleteRetainedBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteRetainedBackupResponse::DeleteRetainedBackupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteRetainedBackupResponse::~DeleteRetainedBackupResponse() = default;

void DeleteRetainedBackupResponse::validate()
{
}

web::json::value DeleteRetainedBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteRetainedBackupResponse::fromJson(const web::json::value& val)
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


std::string DeleteRetainedBackupResponse::getJobId() const
{
    return jobId_;
}

void DeleteRetainedBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteRetainedBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteRetainedBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


