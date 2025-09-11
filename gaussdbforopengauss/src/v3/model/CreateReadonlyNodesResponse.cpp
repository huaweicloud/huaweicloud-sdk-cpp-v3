

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateReadonlyNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateReadonlyNodesResponse::CreateReadonlyNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateReadonlyNodesResponse::~CreateReadonlyNodesResponse() = default;

void CreateReadonlyNodesResponse::validate()
{
}

web::json::value CreateReadonlyNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateReadonlyNodesResponse::fromJson(const web::json::value& val)
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


std::string CreateReadonlyNodesResponse::getJobId() const
{
    return jobId_;
}

void CreateReadonlyNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateReadonlyNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateReadonlyNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


