

#include "huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDatabasePermissionResponse::DeleteDatabasePermissionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDatabasePermissionResponse::~DeleteDatabasePermissionResponse() = default;

void DeleteDatabasePermissionResponse::validate()
{
}

web::json::value DeleteDatabasePermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDatabasePermissionResponse::fromJson(const web::json::value& val)
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


std::string DeleteDatabasePermissionResponse::getJobId() const
{
    return jobId_;
}

void DeleteDatabasePermissionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDatabasePermissionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDatabasePermissionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


