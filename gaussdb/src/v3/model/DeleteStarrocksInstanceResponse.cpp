

#include "huaweicloud/gaussdb/v3/model/DeleteStarrocksInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarrocksInstanceResponse::DeleteStarrocksInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteStarrocksInstanceResponse::~DeleteStarrocksInstanceResponse() = default;

void DeleteStarrocksInstanceResponse::validate()
{
}

web::json::value DeleteStarrocksInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteStarrocksInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteStarrocksInstanceResponse::getJobId() const
{
    return jobId_;
}

void DeleteStarrocksInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteStarrocksInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteStarrocksInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


