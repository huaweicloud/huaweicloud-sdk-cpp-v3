

#include "huaweicloud/gaussdb/v3/model/DeleteColdTableDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteColdTableDataResponse::DeleteColdTableDataResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteColdTableDataResponse::~DeleteColdTableDataResponse() = default;

void DeleteColdTableDataResponse::validate()
{
}

web::json::value DeleteColdTableDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteColdTableDataResponse::fromJson(const web::json::value& val)
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


std::string DeleteColdTableDataResponse::getJobId() const
{
    return jobId_;
}

void DeleteColdTableDataResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteColdTableDataResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteColdTableDataResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


