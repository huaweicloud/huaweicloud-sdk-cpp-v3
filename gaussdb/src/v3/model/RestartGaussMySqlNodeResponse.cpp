

#include "huaweicloud/gaussdb/v3/model/RestartGaussMySqlNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartGaussMySqlNodeResponse::RestartGaussMySqlNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartGaussMySqlNodeResponse::~RestartGaussMySqlNodeResponse() = default;

void RestartGaussMySqlNodeResponse::validate()
{
}

web::json::value RestartGaussMySqlNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestartGaussMySqlNodeResponse::fromJson(const web::json::value& val)
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

std::string RestartGaussMySqlNodeResponse::getJobId() const
{
    return jobId_;
}

void RestartGaussMySqlNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartGaussMySqlNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartGaussMySqlNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


