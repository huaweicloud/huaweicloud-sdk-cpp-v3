

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlConfigurationResponse::SwitchGaussMySqlConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchGaussMySqlConfigurationResponse::~SwitchGaussMySqlConfigurationResponse() = default;

void SwitchGaussMySqlConfigurationResponse::validate()
{
}

web::json::value SwitchGaussMySqlConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchGaussMySqlConfigurationResponse::fromJson(const web::json::value& val)
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


std::string SwitchGaussMySqlConfigurationResponse::getJobId() const
{
    return jobId_;
}

void SwitchGaussMySqlConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchGaussMySqlConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchGaussMySqlConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


