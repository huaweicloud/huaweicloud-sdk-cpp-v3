

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxySslResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxySslResponse::SwitchGaussMySqlProxySslResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchGaussMySqlProxySslResponse::~SwitchGaussMySqlProxySslResponse() = default;

void SwitchGaussMySqlProxySslResponse::validate()
{
}

web::json::value SwitchGaussMySqlProxySslResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchGaussMySqlProxySslResponse::fromJson(const web::json::value& val)
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


std::string SwitchGaussMySqlProxySslResponse::getJobId() const
{
    return jobId_;
}

void SwitchGaussMySqlProxySslResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchGaussMySqlProxySslResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchGaussMySqlProxySslResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


