

#include "huaweicloud/gaussdb/v3/model/ModifyGaussMysqlDnsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyGaussMysqlDnsResponse::ModifyGaussMysqlDnsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyGaussMysqlDnsResponse::~ModifyGaussMysqlDnsResponse() = default;

void ModifyGaussMysqlDnsResponse::validate()
{
}

web::json::value ModifyGaussMysqlDnsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ModifyGaussMysqlDnsResponse::fromJson(const web::json::value& val)
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

std::string ModifyGaussMysqlDnsResponse::getJobId() const
{
    return jobId_;
}

void ModifyGaussMysqlDnsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyGaussMysqlDnsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyGaussMysqlDnsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


