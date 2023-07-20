

#include "huaweicloud/dds/v3/model/DeleteAuditLogResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteAuditLogResponse::DeleteAuditLogResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteAuditLogResponse::~DeleteAuditLogResponse() = default;

void DeleteAuditLogResponse::validate()
{
}

web::json::value DeleteAuditLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteAuditLogResponse::fromJson(const web::json::value& val)
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

std::string DeleteAuditLogResponse::getJobId() const
{
    return jobId_;
}

void DeleteAuditLogResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteAuditLogResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteAuditLogResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


