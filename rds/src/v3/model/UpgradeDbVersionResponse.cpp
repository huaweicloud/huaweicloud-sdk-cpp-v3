

#include "huaweicloud/rds/v3/model/UpgradeDbVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionResponse::UpgradeDbVersionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeDbVersionResponse::~UpgradeDbVersionResponse() = default;

void UpgradeDbVersionResponse::validate()
{
}

web::json::value UpgradeDbVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeDbVersionResponse::fromJson(const web::json::value& val)
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


std::string UpgradeDbVersionResponse::getJobId() const
{
    return jobId_;
}

void UpgradeDbVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeDbVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeDbVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


