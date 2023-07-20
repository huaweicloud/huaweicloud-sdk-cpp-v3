

#include "huaweicloud/gaussdb/v3/model/SetGaussMySqlProxyWeightResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetGaussMySqlProxyWeightResponse::SetGaussMySqlProxyWeightResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetGaussMySqlProxyWeightResponse::~SetGaussMySqlProxyWeightResponse() = default;

void SetGaussMySqlProxyWeightResponse::validate()
{
}

web::json::value SetGaussMySqlProxyWeightResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool SetGaussMySqlProxyWeightResponse::fromJson(const web::json::value& val)
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

std::string SetGaussMySqlProxyWeightResponse::getJobId() const
{
    return jobId_;
}

void SetGaussMySqlProxyWeightResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetGaussMySqlProxyWeightResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetGaussMySqlProxyWeightResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


