

#include "huaweicloud/rds/v3/model/SwitchMySqlProxyEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchMySqlProxyEipResponse::SwitchMySqlProxyEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchMySqlProxyEipResponse::~SwitchMySqlProxyEipResponse() = default;

void SwitchMySqlProxyEipResponse::validate()
{
}

web::json::value SwitchMySqlProxyEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchMySqlProxyEipResponse::fromJson(const web::json::value& val)
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


std::string SwitchMySqlProxyEipResponse::getJobId() const
{
    return jobId_;
}

void SwitchMySqlProxyEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchMySqlProxyEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchMySqlProxyEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


