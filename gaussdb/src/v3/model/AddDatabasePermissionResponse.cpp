

#include "huaweicloud/gaussdb/v3/model/AddDatabasePermissionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AddDatabasePermissionResponse::AddDatabasePermissionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AddDatabasePermissionResponse::~AddDatabasePermissionResponse() = default;

void AddDatabasePermissionResponse::validate()
{
}

web::json::value AddDatabasePermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool AddDatabasePermissionResponse::fromJson(const web::json::value& val)
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

std::string AddDatabasePermissionResponse::getJobId() const
{
    return jobId_;
}

void AddDatabasePermissionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AddDatabasePermissionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AddDatabasePermissionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


