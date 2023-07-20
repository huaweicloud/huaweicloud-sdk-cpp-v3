

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstancePortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstancePortResponse::UpdateGaussMySqlInstancePortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlInstancePortResponse::~UpdateGaussMySqlInstancePortResponse() = default;

void UpdateGaussMySqlInstancePortResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstancePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlInstancePortResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlInstancePortResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlInstancePortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlInstancePortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlInstancePortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


