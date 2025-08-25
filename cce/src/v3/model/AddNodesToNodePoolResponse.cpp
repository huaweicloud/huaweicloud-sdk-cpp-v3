

#include "huaweicloud/cce/v3/model/AddNodesToNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodesToNodePoolResponse::AddNodesToNodePoolResponse()
{
    jobid_ = "";
    jobidIsSet_ = false;
}

AddNodesToNodePoolResponse::~AddNodesToNodePoolResponse() = default;

void AddNodesToNodePoolResponse::validate()
{
}

web::json::value AddNodesToNodePoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobidIsSet_) {
        val[utility::conversions::to_string_t("jobid")] = ModelBase::toJson(jobid_);
    }

    return val;
}
bool AddNodesToNodePoolResponse::fromJson(const web::json::value& val)
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


std::string AddNodesToNodePoolResponse::getJobid() const
{
    return jobid_;
}

void AddNodesToNodePoolResponse::setJobid(const std::string& value)
{
    jobid_ = value;
    jobidIsSet_ = true;
}

bool AddNodesToNodePoolResponse::jobidIsSet() const
{
    return jobidIsSet_;
}

void AddNodesToNodePoolResponse::unsetjobid()
{
    jobidIsSet_ = false;
}

}
}
}
}
}


