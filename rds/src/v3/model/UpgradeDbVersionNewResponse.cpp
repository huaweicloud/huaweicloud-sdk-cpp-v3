

#include "huaweicloud/rds/v3/model/UpgradeDbVersionNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionNewResponse::UpgradeDbVersionNewResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeDbVersionNewResponse::~UpgradeDbVersionNewResponse() = default;

void UpgradeDbVersionNewResponse::validate()
{
}

web::json::value UpgradeDbVersionNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeDbVersionNewResponse::fromJson(const web::json::value& val)
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


std::string UpgradeDbVersionNewResponse::getJobId() const
{
    return jobId_;
}

void UpgradeDbVersionNewResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeDbVersionNewResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeDbVersionNewResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


