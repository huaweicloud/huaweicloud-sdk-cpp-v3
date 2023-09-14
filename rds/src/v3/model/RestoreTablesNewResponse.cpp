

#include "huaweicloud/rds/v3/model/RestoreTablesNewResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesNewResponse::RestoreTablesNewResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreTablesNewResponse::~RestoreTablesNewResponse() = default;

void RestoreTablesNewResponse::validate()
{
}

web::json::value RestoreTablesNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreTablesNewResponse::fromJson(const web::json::value& val)
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

std::string RestoreTablesNewResponse::getJobId() const
{
    return jobId_;
}

void RestoreTablesNewResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreTablesNewResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreTablesNewResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


