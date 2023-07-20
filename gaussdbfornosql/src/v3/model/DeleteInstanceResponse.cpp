

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteInstanceResponse::DeleteInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteInstanceResponse::~DeleteInstanceResponse() = default;

void DeleteInstanceResponse::validate()
{
}

web::json::value DeleteInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteInstanceResponse::fromJson(const web::json::value& val)
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

std::string DeleteInstanceResponse::getJobId() const
{
    return jobId_;
}

void DeleteInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


