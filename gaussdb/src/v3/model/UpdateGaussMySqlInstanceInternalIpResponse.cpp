

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceInternalIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceInternalIpResponse::UpdateGaussMySqlInstanceInternalIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlInstanceInternalIpResponse::~UpdateGaussMySqlInstanceInternalIpResponse() = default;

void UpdateGaussMySqlInstanceInternalIpResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceInternalIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlInstanceInternalIpResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlInstanceInternalIpResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlInstanceInternalIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceInternalIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlInstanceInternalIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


