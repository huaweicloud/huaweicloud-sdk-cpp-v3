

#include "huaweicloud/gaussdb/v3/model/CollectColdTableMetasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CollectColdTableMetasResponse::CollectColdTableMetasResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CollectColdTableMetasResponse::~CollectColdTableMetasResponse() = default;

void CollectColdTableMetasResponse::validate()
{
}

web::json::value CollectColdTableMetasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CollectColdTableMetasResponse::fromJson(const web::json::value& val)
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


std::string CollectColdTableMetasResponse::getJobId() const
{
    return jobId_;
}

void CollectColdTableMetasResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectColdTableMetasResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectColdTableMetasResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


