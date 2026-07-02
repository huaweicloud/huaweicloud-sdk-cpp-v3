

#include "huaweicloud/gaussdb/v3/model/UpdateDynamicServerlessPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDynamicServerlessPolicyResponse::UpdateDynamicServerlessPolicyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateDynamicServerlessPolicyResponse::~UpdateDynamicServerlessPolicyResponse() = default;

void UpdateDynamicServerlessPolicyResponse::validate()
{
}

web::json::value UpdateDynamicServerlessPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateDynamicServerlessPolicyResponse::fromJson(const web::json::value& val)
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


std::string UpdateDynamicServerlessPolicyResponse::getJobId() const
{
    return jobId_;
}

void UpdateDynamicServerlessPolicyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateDynamicServerlessPolicyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateDynamicServerlessPolicyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


