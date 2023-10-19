

#include "huaweicloud/gaussdb/v3/model/CreateRestoreTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateRestoreTablesResponse::CreateRestoreTablesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateRestoreTablesResponse::~CreateRestoreTablesResponse() = default;

void CreateRestoreTablesResponse::validate()
{
}

web::json::value CreateRestoreTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateRestoreTablesResponse::fromJson(const web::json::value& val)
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


std::string CreateRestoreTablesResponse::getJobId() const
{
    return jobId_;
}

void CreateRestoreTablesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateRestoreTablesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateRestoreTablesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


