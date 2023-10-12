

#include "huaweicloud/gaussdb/v3/model/CreateGaussMysqlDnsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMysqlDnsResponse::CreateGaussMysqlDnsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGaussMysqlDnsResponse::~CreateGaussMysqlDnsResponse() = default;

void CreateGaussMysqlDnsResponse::validate()
{
}

web::json::value CreateGaussMysqlDnsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateGaussMysqlDnsResponse::fromJson(const web::json::value& val)
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


std::string CreateGaussMysqlDnsResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMysqlDnsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMysqlDnsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMysqlDnsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


