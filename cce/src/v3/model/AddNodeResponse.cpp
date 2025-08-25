

#include "huaweicloud/cce/v3/model/AddNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodeResponse::AddNodeResponse()
{
    jobid_ = "";
    jobidIsSet_ = false;
}

AddNodeResponse::~AddNodeResponse() = default;

void AddNodeResponse::validate()
{
}

web::json::value AddNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobidIsSet_) {
        val[utility::conversions::to_string_t("jobid")] = ModelBase::toJson(jobid_);
    }

    return val;
}
bool AddNodeResponse::fromJson(const web::json::value& val)
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


std::string AddNodeResponse::getJobid() const
{
    return jobid_;
}

void AddNodeResponse::setJobid(const std::string& value)
{
    jobid_ = value;
    jobidIsSet_ = true;
}

bool AddNodeResponse::jobidIsSet() const
{
    return jobidIsSet_;
}

void AddNodeResponse::unsetjobid()
{
    jobidIsSet_ = false;
}

}
}
}
}
}


