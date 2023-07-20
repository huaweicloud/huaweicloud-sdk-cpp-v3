

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlConfigurationResponse::UpdateGaussMySqlConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlConfigurationResponse::~UpdateGaussMySqlConfigurationResponse() = default;

void UpdateGaussMySqlConfigurationResponse::validate()
{
}

web::json::value UpdateGaussMySqlConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlConfigurationResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlConfigurationResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


