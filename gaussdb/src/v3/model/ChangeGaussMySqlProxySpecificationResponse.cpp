

#include "huaweicloud/gaussdb/v3/model/ChangeGaussMySqlProxySpecificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChangeGaussMySqlProxySpecificationResponse::ChangeGaussMySqlProxySpecificationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeGaussMySqlProxySpecificationResponse::~ChangeGaussMySqlProxySpecificationResponse() = default;

void ChangeGaussMySqlProxySpecificationResponse::validate()
{
}

web::json::value ChangeGaussMySqlProxySpecificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ChangeGaussMySqlProxySpecificationResponse::fromJson(const web::json::value& val)
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


std::string ChangeGaussMySqlProxySpecificationResponse::getJobId() const
{
    return jobId_;
}

void ChangeGaussMySqlProxySpecificationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeGaussMySqlProxySpecificationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeGaussMySqlProxySpecificationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


