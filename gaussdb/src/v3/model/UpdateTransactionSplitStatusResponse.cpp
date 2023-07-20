

#include "huaweicloud/gaussdb/v3/model/UpdateTransactionSplitStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTransactionSplitStatusResponse::UpdateTransactionSplitStatusResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateTransactionSplitStatusResponse::~UpdateTransactionSplitStatusResponse() = default;

void UpdateTransactionSplitStatusResponse::validate()
{
}

web::json::value UpdateTransactionSplitStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateTransactionSplitStatusResponse::fromJson(const web::json::value& val)
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

std::string UpdateTransactionSplitStatusResponse::getJobId() const
{
    return jobId_;
}

void UpdateTransactionSplitStatusResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateTransactionSplitStatusResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateTransactionSplitStatusResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


