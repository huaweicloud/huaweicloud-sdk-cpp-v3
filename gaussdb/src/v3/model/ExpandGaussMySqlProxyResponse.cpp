

#include "huaweicloud/gaussdb/v3/model/ExpandGaussMySqlProxyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExpandGaussMySqlProxyResponse::ExpandGaussMySqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExpandGaussMySqlProxyResponse::~ExpandGaussMySqlProxyResponse() = default;

void ExpandGaussMySqlProxyResponse::validate()
{
}

web::json::value ExpandGaussMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ExpandGaussMySqlProxyResponse::fromJson(const web::json::value& val)
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

std::string ExpandGaussMySqlProxyResponse::getJobId() const
{
    return jobId_;
}

void ExpandGaussMySqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExpandGaussMySqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExpandGaussMySqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


