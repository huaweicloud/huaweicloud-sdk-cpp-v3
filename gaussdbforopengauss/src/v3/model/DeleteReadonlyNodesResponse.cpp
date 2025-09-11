

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteReadonlyNodesResponse::DeleteReadonlyNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteReadonlyNodesResponse::~DeleteReadonlyNodesResponse() = default;

void DeleteReadonlyNodesResponse::validate()
{
}

web::json::value DeleteReadonlyNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteReadonlyNodesResponse::fromJson(const web::json::value& val)
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


std::string DeleteReadonlyNodesResponse::getJobId() const
{
    return jobId_;
}

void DeleteReadonlyNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteReadonlyNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteReadonlyNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


