

#include "huaweicloud/gaussdb/v3/model/ShrinkGaussMySqlProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShrinkGaussMySqlProxyResponse::ShrinkGaussMySqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShrinkGaussMySqlProxyResponse::~ShrinkGaussMySqlProxyResponse() = default;

void ShrinkGaussMySqlProxyResponse::validate()
{
}

web::json::value ShrinkGaussMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShrinkGaussMySqlProxyResponse::fromJson(const web::json::value& val)
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


std::string ShrinkGaussMySqlProxyResponse::getJobId() const
{
    return jobId_;
}

void ShrinkGaussMySqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShrinkGaussMySqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShrinkGaussMySqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


