

#include "huaweicloud/gaussdb/v3/model/DeleteDynamicServerlessPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDynamicServerlessPolicyResponse::DeleteDynamicServerlessPolicyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDynamicServerlessPolicyResponse::~DeleteDynamicServerlessPolicyResponse() = default;

void DeleteDynamicServerlessPolicyResponse::validate()
{
}

web::json::value DeleteDynamicServerlessPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDynamicServerlessPolicyResponse::fromJson(const web::json::value& val)
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


std::string DeleteDynamicServerlessPolicyResponse::getJobId() const
{
    return jobId_;
}

void DeleteDynamicServerlessPolicyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDynamicServerlessPolicyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDynamicServerlessPolicyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


