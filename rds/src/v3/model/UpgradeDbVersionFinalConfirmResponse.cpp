

#include "huaweicloud/rds/v3/model/UpgradeDbVersionFinalConfirmResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeDbVersionFinalConfirmResponse::UpgradeDbVersionFinalConfirmResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeDbVersionFinalConfirmResponse::~UpgradeDbVersionFinalConfirmResponse() = default;

void UpgradeDbVersionFinalConfirmResponse::validate()
{
}

web::json::value UpgradeDbVersionFinalConfirmResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeDbVersionFinalConfirmResponse::fromJson(const web::json::value& val)
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


std::string UpgradeDbVersionFinalConfirmResponse::getJobId() const
{
    return jobId_;
}

void UpgradeDbVersionFinalConfirmResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeDbVersionFinalConfirmResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeDbVersionFinalConfirmResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


