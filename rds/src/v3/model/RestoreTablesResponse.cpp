

#include "huaweicloud/rds/v3/model/RestoreTablesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTablesResponse::RestoreTablesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreTablesResponse::~RestoreTablesResponse() = default;

void RestoreTablesResponse::validate()
{
}

web::json::value RestoreTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}

std::string RestoreTablesResponse::getJobId() const
{
    return jobId_;
}

void RestoreTablesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreTablesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreTablesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


