

#include "huaweicloud/cce/v3/model/ResetNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResetNodeResponse::ResetNodeResponse()
{
    jobid_ = "";
    jobidIsSet_ = false;
}

ResetNodeResponse::~ResetNodeResponse() = default;

void ResetNodeResponse::validate()
{
}

web::json::value ResetNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobidIsSet_) {
        val[utility::conversions::to_string_t("jobid")] = ModelBase::toJson(jobid_);
    }

    return val;
}
bool ResetNodeResponse::fromJson(const web::json::value& val)
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


std::string ResetNodeResponse::getJobid() const
{
    return jobid_;
}

void ResetNodeResponse::setJobid(const std::string& value)
{
    jobid_ = value;
    jobidIsSet_ = true;
}

bool ResetNodeResponse::jobidIsSet() const
{
    return jobidIsSet_;
}

void ResetNodeResponse::unsetjobid()
{
    jobidIsSet_ = false;
}

}
}
}
}
}


