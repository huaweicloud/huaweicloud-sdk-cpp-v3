

#include "huaweicloud/dds/v3/model/MigrateAzResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




MigrateAzResponse::MigrateAzResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

MigrateAzResponse::~MigrateAzResponse() = default;

void MigrateAzResponse::validate()
{
}

web::json::value MigrateAzResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool MigrateAzResponse::fromJson(const web::json::value& val)
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

std::string MigrateAzResponse::getJobId() const
{
    return jobId_;
}

void MigrateAzResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool MigrateAzResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void MigrateAzResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


