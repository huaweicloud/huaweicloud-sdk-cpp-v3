

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlProxyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlProxyResponse::DeleteGaussMySqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteGaussMySqlProxyResponse::~DeleteGaussMySqlProxyResponse() = default;

void DeleteGaussMySqlProxyResponse::validate()
{
}

web::json::value DeleteGaussMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteGaussMySqlProxyResponse::fromJson(const web::json::value& val)
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

std::string DeleteGaussMySqlProxyResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


