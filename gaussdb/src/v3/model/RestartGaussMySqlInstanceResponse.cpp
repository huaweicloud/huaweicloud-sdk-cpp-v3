

#include "huaweicloud/gaussdb/v3/model/RestartGaussMySqlInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartGaussMySqlInstanceResponse::RestartGaussMySqlInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartGaussMySqlInstanceResponse::~RestartGaussMySqlInstanceResponse() = default;

void RestartGaussMySqlInstanceResponse::validate()
{
}

web::json::value RestartGaussMySqlInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartGaussMySqlInstanceResponse::fromJson(const web::json::value& val)
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


std::string RestartGaussMySqlInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestartGaussMySqlInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartGaussMySqlInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartGaussMySqlInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


