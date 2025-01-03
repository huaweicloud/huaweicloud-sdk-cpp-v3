

#include "huaweicloud/rds/v3/model/CopyDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CopyDatabaseResponse::CopyDatabaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CopyDatabaseResponse::~CopyDatabaseResponse() = default;

void CopyDatabaseResponse::validate()
{
}

web::json::value CopyDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CopyDatabaseResponse::fromJson(const web::json::value& val)
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


std::string CopyDatabaseResponse::getJobId() const
{
    return jobId_;
}

void CopyDatabaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CopyDatabaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CopyDatabaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


