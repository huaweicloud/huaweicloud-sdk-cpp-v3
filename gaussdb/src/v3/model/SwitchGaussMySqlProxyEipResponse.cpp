

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyEipResponse::SwitchGaussMySqlProxyEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchGaussMySqlProxyEipResponse::~SwitchGaussMySqlProxyEipResponse() = default;

void SwitchGaussMySqlProxyEipResponse::validate()
{
}

web::json::value SwitchGaussMySqlProxyEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchGaussMySqlProxyEipResponse::fromJson(const web::json::value& val)
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


std::string SwitchGaussMySqlProxyEipResponse::getJobId() const
{
    return jobId_;
}

void SwitchGaussMySqlProxyEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchGaussMySqlProxyEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


