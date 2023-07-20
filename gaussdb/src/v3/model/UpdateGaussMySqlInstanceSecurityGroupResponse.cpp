

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceSecurityGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceSecurityGroupResponse::UpdateGaussMySqlInstanceSecurityGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlInstanceSecurityGroupResponse::~UpdateGaussMySqlInstanceSecurityGroupResponse() = default;

void UpdateGaussMySqlInstanceSecurityGroupResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlInstanceSecurityGroupResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlInstanceSecurityGroupResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlInstanceSecurityGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceSecurityGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlInstanceSecurityGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


