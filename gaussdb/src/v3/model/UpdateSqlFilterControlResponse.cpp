

#include "huaweicloud/gaussdb/v3/model/UpdateSqlFilterControlResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSqlFilterControlResponse::UpdateSqlFilterControlResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateSqlFilterControlResponse::~UpdateSqlFilterControlResponse() = default;

void UpdateSqlFilterControlResponse::validate()
{
}

web::json::value UpdateSqlFilterControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateSqlFilterControlResponse::fromJson(const web::json::value& val)
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

std::string UpdateSqlFilterControlResponse::getJobId() const
{
    return jobId_;
}

void UpdateSqlFilterControlResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateSqlFilterControlResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateSqlFilterControlResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


