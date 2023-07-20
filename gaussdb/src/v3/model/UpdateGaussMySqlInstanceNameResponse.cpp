

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceNameResponse::UpdateGaussMySqlInstanceNameResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlInstanceNameResponse::~UpdateGaussMySqlInstanceNameResponse() = default;

void UpdateGaussMySqlInstanceNameResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlInstanceNameResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlInstanceNameResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlInstanceNameResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceNameResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlInstanceNameResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


