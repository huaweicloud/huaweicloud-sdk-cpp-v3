

#include "huaweicloud/cce/v3/model/UpgradeNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeNodePoolResponse::UpgradeNodePoolResponse()
{
    jobid_ = "";
    jobidIsSet_ = false;
}

UpgradeNodePoolResponse::~UpgradeNodePoolResponse() = default;

void UpgradeNodePoolResponse::validate()
{
}

web::json::value UpgradeNodePoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobidIsSet_) {
        val[utility::conversions::to_string_t("jobid")] = ModelBase::toJson(jobid_);
    }

    return val;
}
bool UpgradeNodePoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobid(refVal);
        }
    }
    return ok;
}


std::string UpgradeNodePoolResponse::getJobid() const
{
    return jobid_;
}

void UpgradeNodePoolResponse::setJobid(const std::string& value)
{
    jobid_ = value;
    jobidIsSet_ = true;
}

bool UpgradeNodePoolResponse::jobidIsSet() const
{
    return jobidIsSet_;
}

void UpgradeNodePoolResponse::unsetjobid()
{
    jobidIsSet_ = false;
}

}
}
}
}
}


