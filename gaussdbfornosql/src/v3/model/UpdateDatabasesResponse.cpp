

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateDatabasesResponse::UpdateDatabasesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateDatabasesResponse::~UpdateDatabasesResponse() = default;

void UpdateDatabasesResponse::validate()
{
}

web::json::value UpdateDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateDatabasesResponse::fromJson(const web::json::value& val)
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


std::string UpdateDatabasesResponse::getJobId() const
{
    return jobId_;
}

void UpdateDatabasesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateDatabasesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateDatabasesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


