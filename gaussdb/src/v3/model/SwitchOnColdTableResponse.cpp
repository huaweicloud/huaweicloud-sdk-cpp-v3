

#include "huaweicloud/gaussdb/v3/model/SwitchOnColdTableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchOnColdTableResponse::SwitchOnColdTableResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchOnColdTableResponse::~SwitchOnColdTableResponse() = default;

void SwitchOnColdTableResponse::validate()
{
}

web::json::value SwitchOnColdTableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchOnColdTableResponse::fromJson(const web::json::value& val)
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


std::string SwitchOnColdTableResponse::getJobId() const
{
    return jobId_;
}

void SwitchOnColdTableResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchOnColdTableResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchOnColdTableResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


