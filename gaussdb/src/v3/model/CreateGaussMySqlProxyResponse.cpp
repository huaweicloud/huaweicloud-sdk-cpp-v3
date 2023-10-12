

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlProxyResponse::CreateGaussMySqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGaussMySqlProxyResponse::~CreateGaussMySqlProxyResponse() = default;

void CreateGaussMySqlProxyResponse::validate()
{
}

web::json::value CreateGaussMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateGaussMySqlProxyResponse::fromJson(const web::json::value& val)
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


std::string CreateGaussMySqlProxyResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


