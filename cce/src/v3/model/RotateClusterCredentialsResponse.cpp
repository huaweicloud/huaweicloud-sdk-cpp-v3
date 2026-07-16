

#include "huaweicloud/cce/v3/model/RotateClusterCredentialsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateClusterCredentialsResponse::RotateClusterCredentialsResponse()
{
    jobid_ = "";
    jobidIsSet_ = false;
}

RotateClusterCredentialsResponse::~RotateClusterCredentialsResponse() = default;

void RotateClusterCredentialsResponse::validate()
{
}

web::json::value RotateClusterCredentialsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobidIsSet_) {
        val[utility::conversions::to_string_t("jobid")] = ModelBase::toJson(jobid_);
    }

    return val;
}
bool RotateClusterCredentialsResponse::fromJson(const web::json::value& val)
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


std::string RotateClusterCredentialsResponse::getJobid() const
{
    return jobid_;
}

void RotateClusterCredentialsResponse::setJobid(const std::string& value)
{
    jobid_ = value;
    jobidIsSet_ = true;
}

bool RotateClusterCredentialsResponse::jobidIsSet() const
{
    return jobidIsSet_;
}

void RotateClusterCredentialsResponse::unsetjobid()
{
    jobidIsSet_ = false;
}

}
}
}
}
}


