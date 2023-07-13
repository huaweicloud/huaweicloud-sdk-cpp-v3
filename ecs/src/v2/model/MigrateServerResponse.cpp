

#include "huaweicloud/ecs/v2/model/MigrateServerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MigrateServerResponse::MigrateServerResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

MigrateServerResponse::~MigrateServerResponse() = default;

void MigrateServerResponse::validate()
{
}

web::json::value MigrateServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool MigrateServerResponse::fromJson(const web::json::value& val)
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

std::string MigrateServerResponse::getJobId() const
{
    return jobId_;
}

void MigrateServerResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool MigrateServerResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void MigrateServerResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


