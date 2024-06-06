

#include "huaweicloud/gaussdb/v3/model/RenameInstanceNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RenameInstanceNodeResponse::RenameInstanceNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RenameInstanceNodeResponse::~RenameInstanceNodeResponse() = default;

void RenameInstanceNodeResponse::validate()
{
}

web::json::value RenameInstanceNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RenameInstanceNodeResponse::fromJson(const web::json::value& val)
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


std::string RenameInstanceNodeResponse::getJobId() const
{
    return jobId_;
}

void RenameInstanceNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RenameInstanceNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RenameInstanceNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


