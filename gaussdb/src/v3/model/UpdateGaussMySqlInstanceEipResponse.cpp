

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceEipResponse::UpdateGaussMySqlInstanceEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlInstanceEipResponse::~UpdateGaussMySqlInstanceEipResponse() = default;

void UpdateGaussMySqlInstanceEipResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateGaussMySqlInstanceEipResponse::fromJson(const web::json::value& val)
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


std::string UpdateGaussMySqlInstanceEipResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlInstanceEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlInstanceEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


