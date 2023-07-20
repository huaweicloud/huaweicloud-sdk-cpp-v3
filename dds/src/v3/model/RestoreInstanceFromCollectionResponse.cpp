

#include "huaweicloud/dds/v3/model/RestoreInstanceFromCollectionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceFromCollectionResponse::RestoreInstanceFromCollectionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreInstanceFromCollectionResponse::~RestoreInstanceFromCollectionResponse() = default;

void RestoreInstanceFromCollectionResponse::validate()
{
}

web::json::value RestoreInstanceFromCollectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreInstanceFromCollectionResponse::fromJson(const web::json::value& val)
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

std::string RestoreInstanceFromCollectionResponse::getJobId() const
{
    return jobId_;
}

void RestoreInstanceFromCollectionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreInstanceFromCollectionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreInstanceFromCollectionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


